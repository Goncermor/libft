/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 15:14:12 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/18 16:13:54 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	strcontains(char c, char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	index;
	size_t	index_rev;

	if (s1 == 0 || set == 0)
		return (NULL);
	index = 0;
	index_rev = ft_strlen(s1);
	while (s1[index] != '\0'
		&& strcontains(s1[index], (char *) set) == 1)
		index++;
	while (index_rev > index
		&& strcontains(s1[index_rev - 1], (char *) set) == 1)
		index_rev--;
	return (ft_substr(s1, index, index_rev - index));
}
