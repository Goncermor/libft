/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 11:42:28 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/18 12:49:36 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	sub_len;

	s_len = ft_strlen(s);
	if (start > s_len)
		start = s_len;
	sub_len = s_len - start;
	if (len < sub_len)
		sub_len = len;
	sub = malloc(sub_len + 1);
	if (sub == 0)
		return (0);
	ft_strlcpy(sub, &s[start], sub_len + 1);
	return (sub);
}
