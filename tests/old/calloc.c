/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   calloc.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 11:57:19 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int	main(void)
{
	printf("\ncalloc(0, 0) -> %p", calloc(0, 0));
	printf("\nft_calloc(0, 0) -> %p\n", ft_calloc(0, 0));
	printf("\ncalloc(2147483647, 10) -> %p", calloc(2147483647, 10));
	printf("\nft_calloc(2147483647, 10) -> %p\n", ft_calloc(2147483647, 10));
	printf("\ncalloc(1, 4) -> %p", calloc(1, sizeof(int)));
	printf("\nft_calloc(1, 4) -> %p\n", ft_calloc(1, sizeof(int)));
}
