/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/05 15:13:40 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 16:20:33 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief 
/// @param big 
/// @param little 
/// @param len 
/// @return 
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	little_len;

	little_len = ft_strlen(little);
	while (len < little_len && *big != '\0')
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return (big);
		big++;
		len--;
	}
	return (0);
}
