/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 11:42:28 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 14:24:11 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc(len + 1);
	ft_strlcpy(ptr, &s[start], len + 1);
	return (ptr);
}
