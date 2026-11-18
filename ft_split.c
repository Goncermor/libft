/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 16:07:23 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/18 17:04:10 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	word_count(char *str, char sep)
{
	size_t	count;

	count = 0;
	while (*str != '\0')
	{
		if (*str != sep)
		{
			count++;
			while (*str != sep && *str != '\0')
				str++;
		}
		else
			str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
}
