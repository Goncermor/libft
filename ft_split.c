/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 16:07:23 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/18 16:40:52 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	word_count(char c, char *str)
{
	size_t	count;
	size_t	index;

	count = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] != c && (index == 0 || str[index - 1] == c))
			count++;
		index++;
	}
	return (count);
}

static unsigned int	strlen_until(char *src, char stop)
{
	unsigned int	len;

	len = 0;
	while (*src != stop && *src != '\0')
	{
		len++;
		src++;
	}
	return (len);
}

static void	alloc_error_cleanup(unsigned int size, char ***arr)
{
	while (size != 0)
	{
		free(*arr[size]);
		size--;
	}
	free(**arr);
	***arr = 0;
}

char	**ft_split(char const *s, char c)
{
	unsigned int	index;
	unsigned int	len;
	unsigned int	splits;
	char			**arr;
	unsigned int	arr_index;

	index = 0;
	arr_index = 0;
	splits = word_count(c, (char *) s);
	arr = malloc((splits + 1) * sizeof(char *));
	if (arr == 0)
		return (0);
	arr[splits] = 0;
	while (arr_index != splits)
	{
		len = strlen_until((char *) & s[index], c) + 1;
		arr[arr_index] = malloc(len);
		if (arr[arr_index] == 0)
			alloc_error_cleanup(arr_index, &arr);
		ft_strlcpy(arr[arr_index++], &s[index], len);
		index += len;
	}
	return (arr);
}
