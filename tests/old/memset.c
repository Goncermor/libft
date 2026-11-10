/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   memset.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 12:26:44 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../libft.h"

static void	put_strhex(char *str, unsigned int len)
{
	unsigned int	index;

	index = 0;
	while (index != len)
	{
		printf("%X ", str[index]);
		index++;
	}
}

int	main(int argc, char *argv[])
{
	char			*test_memset;
	char			*test_ft_memset;
	unsigned int	length;

	if (argc > 1)
	{
		length = strlen(argv[1]) + 1;
		test_memset = strdup(argv[1]);
		test_ft_memset = strdup(argv[1]);
		printf("Before: \n  Str1: \"%s\\0\" | ", test_memset);
		put_strhex(test_memset, length);
		printf("\n  Str2: \"%s\\0\" | ", test_ft_memset);
		put_strhex(test_ft_memset, length);
		printf("\n\nAfter: \n  Str1 (memset): ");
		put_strhex(memset(test_memset, 66, length), length);
		printf("\n  Str2 (ft_memset): ");
		put_strhex(ft_memset(test_ft_memset, 66, length), length);
		printf("\n\n");
	}
	else
		printf("Invalid argument:\n\tProgram use: %s <string>\n", argv[0]);
	return (0);
}
