/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 16:19:45 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/04 12:57:01 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;

	ptr = malloc(size * nmemb);
	if (ptr != 0)
		ft_bzero(ptr, size * nmemb);
	return (ptr);
}
