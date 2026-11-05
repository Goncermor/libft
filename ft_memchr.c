/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 12:44:20 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/05 14:49:49 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *) s;
	while (*ptr != '\0')
	{
		if (*ptr == c)
			return (ptr);
	}
	if (c == '\0')
		return (ptr);
	return (0);
}
