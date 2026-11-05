/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 11:44:02 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/04 11:59:21 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (dst[index] != '\0')
		index++;
	while (src[index] != '\0' && index != size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	while (dst[index] != '\0')
		index++;
	return (index);
}
