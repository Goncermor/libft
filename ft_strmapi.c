/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 15:21:37 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 15:56:31 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	char			*result_str;

	index = 0;
	result_str = malloc(ft_strlen(s) + 1);
	if (result_str == 0)
		return (0);
	while (s[index] != '\0')
	{
		result_str[index] = f(index, s[index]);
		index++;
	}
	result_str[index] = '\0';
	return (result_str);
}
