/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 15:14:12 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/10 13:17:18 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	contains_char(const char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	unsigned int	index;
	char			*ptr;

	len = ft_strlen(s1);
	index = len - 1;
	while (contains_char(set, s1[index]) == 1)
	{
		index--;
		len--;
	}
	index = 0;
	while (contains_char(set, s1[index]) == 1)
	{
		index++;
		len--;
	}
	ptr = malloc(len + 1);
	ptr[len] = '\0';
	index = 0;
	while (contains_char(set, s1[index]) == 1)
		index++;
	while (*ptr != '\0')
	{
		*ptr = s1[index];
		index++;
		ptr++;
	}
}
