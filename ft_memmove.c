/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:00:49 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 16:00:03 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/// @brief 
/// @param dest 
/// @param src 
/// @param n 
/// @return 
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			index;
	unsigned char	*temp;

	index = 0;
	temp = malloc(n);
	while (index != n)
	{
		temp[index] = ((unsigned char *) src)[index];
		index++;
	}
	index = 0;
	while (index != n)
	{
		((unsigned char *) dest)[index] = temp[index];
		index++;
	}
	return (dest);
}
