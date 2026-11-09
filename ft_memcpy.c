/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcpy.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 15:55:32 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/03 15:59:30 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/// @brief 
/// @param dest 
/// @param src 
/// @param n 
/// @return 
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*mem_dest;

	mem_dest = dest;
	while (n != 0)
	{
		*mem_dest = *(unsigned char *) src;
		mem_dest++;
		src++;
		n--;
	}
	return (dest);
}
