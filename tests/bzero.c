/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   bzero.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 12:25:48 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
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

static void	test(char *t)
{
	char			*test_bzero;
	char			*test_ft_bzero;
	unsigned int	length;

	length = strlen(t) + 1;
	test_bzero = strdup(t);
	test_ft_bzero = strdup(t);
	printf("Before: \n  Str1: \"%s\\0\" | ", test_bzero);
	put_strhex(test_bzero, length);
	printf("\n  Str2: \"%s\\0\" | ", test_ft_bzero);
	put_strhex(test_ft_bzero, length);
	bzero(test_bzero, length);
	ft_bzero(test_ft_bzero, length);
	printf("\nAfter: \n  Str1 (bzero): ");
	put_strhex(test_bzero, length);
	printf("\n  Str2 (ft_bzero): ");
	put_strhex(test_ft_bzero, length);
	printf("\nResult:");
	if (memcmp(test_bzero, test_ft_bzero, length) == 0)
		printf("\e[1;92mPASSED\033[0m\n");
	else
		printf("\e[1;91mFAILED\033[0m\n");
	printf("\n");
	free(test_bzero);
	free(test_ft_bzero);
}

int	main(void)
{
	test("Hello World");
	test("");
	test("     ");
}
