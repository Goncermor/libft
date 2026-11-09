/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 15:21:37 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 15:36:04 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/// @brief 
/// @param s 
/// @param f 
/// @return 
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
