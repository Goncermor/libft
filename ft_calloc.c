/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:19:45 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/18 14:40:45 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	if (nmemb == 0 || size == 0)
		ptr = malloc(1);
	else if (INT_MAX / nmemb < size)
		return (0);
	else
	{
		ptr = malloc(size * nmemb);
		if (ptr != 0)
			ft_bzero(ptr, size * nmemb);
	}
	return (ptr);
}
