/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 11:38:46 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/05 15:13:17 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n != 0 && *(unsigned char *) s1 != '\0')
	{
		if (*(unsigned char *) s1 > *(unsigned char *) s2)
			return (-1);
		else if (*(unsigned char *) s1 < *(unsigned char *) s2)
			return (1);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
