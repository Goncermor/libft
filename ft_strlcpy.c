/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 11:44:02 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/04 11:50:58 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief 
/// @param dst 
/// @param src 
/// @param size 
/// @return 
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	while (src[index] != '\0' && index != size - 1)
	{
		dst[index] = src[index];
		index++;
	}
	while (src[index] != '\0')
		index++;
	dst[index] = '\0';
	return (index);
}
