/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 11:42:28 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/10 10:31:39 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief
/// @param s
/// @param start
/// @param len
/// @return

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	ptr;

	ptr = malloc(len + 1);
	ft_strlcpy(ptr, s[start], len);
}
