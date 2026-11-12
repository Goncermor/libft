/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 11:44:02 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 15:15:22 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief 
/// @param dst 
/// @param src 
/// @param size 
/// @return 
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = ft_strlen(dst);
	while (*src != '\0' && index < size - 1)
	{
		dst[index] = *src;
		src++;
		index++;
	}
	dst[index] = '\0';
	while (dst[index] != '\0')
		index++;
	return (index);
}
