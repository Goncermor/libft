/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 16:07:23 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/20 12:08:48 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static unsigned int	word_count(char *str, char sep)
{
	size_t	count;
	char	is_word;

	is_word = 0;
	count = 0;
	while (*str != 0)
	{
		if (*str != sep)
			is_word = 1;
		else if (is_word == 1)
		{
			is_word = 0;
			count++;
		}
		str++;
	}
	if (is_word == 1)
		count++;
	return (count);
}

static char	*ft_strndup(const char *s, unsigned int n)
{
	char	*ptr;

	ptr = malloc(n + 1);
	if (ptr != 0)
		ft_strlcpy(ptr, s, n + 1);
	return (ptr);
}

static size_t	ft_strclen(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != c && *s != 0)
	{
		len++;
		s++;
	}
	return (len);
}

static void	*free_all(char **ptr)
{
	size_t	index;

	index = 0;
	while (ptr[index] != 0)
	{
		free(ptr[index]);
		index++;
	}
	free(ptr);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	char	is_word;
	size_t	index;
	size_t	str_index;

	index = 0;
	str_index = 0;
	is_word = 0;
	ptr = ft_calloc(word_count((char *) s, c) + 1, sizeof(char *));
	if (ptr == 0)
		return (0);
	while (s[index] != 0)
	{
		if (s[index] == c)
			is_word = 0;
		else if (is_word == 0)
		{
			ptr[str_index] = ft_strndup(&s[index], ft_strclen(&s[index], c));
			if (ptr[str_index++] == 0)
				return (free_all(ptr));
			is_word = 1;
		}
		index++;
	}
	return (ptr);
}
