/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:00:49 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/20 16:09:06 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (dest == 0 && src == 0)
		return (0);
	if (dest > src)
	{
		index = n;
		while (index != 0)
		{
			index--;
			((unsigned char *) dest)[index] = ((unsigned char *) src)[index];
		}
	}
	else
	{
		index = 0;
		while (index != n)
		{
			((unsigned char *) dest)[index] = ((unsigned char *) src)[index];
			index++;
		}
	}
	return (dest);
}
