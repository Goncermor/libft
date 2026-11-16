/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:00:49 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/16 16:39:25 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	index;

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
