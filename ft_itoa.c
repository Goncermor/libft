/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 17:07:03 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 17:07:31 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_itoa(int n)
{
	unsigned int	len;
	int				temp_n;
	char			*ptr;

	len = 0;
	if (n < 0)
		temp_n = -n;
	else
		temp_n = n;
	while (temp_n < 10)
	{
		temp_n /= 10;
		len++;
	}
	if (temp_n < 0)
		ptr = malloc(len);
	else
		ptr = malloc(len + 1);
	while (n > 10)
	{
		ptr[len] = n % 10;
		n /= 10;
		len--;
	}
	if (temp_n < 0)
		ptr[len] = '-';
	return (ptr);
}
