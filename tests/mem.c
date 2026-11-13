/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   mem.c                                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 11:13:46 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 12:17:11 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../libft.h"

void	test_memset(void)
{
	char			*str;
	unsigned char	index;

	index = 0;
	str = malloc(16);
	memset(str, 42, 16);
	ft_memset(str, 42, 16);
	while (index != 16)
	{
		if (str[index] != 42)
		{
			printf("ft_memset \e[1;91mFAIL\033[0m\n");
			return ;
		}
		index++;
	}
	printf("ft_memset \e[1;92mPASS\033[0m\n");
}

void	test_memcmp(void)
{
	if (ft_memcmp("AAACCC", "AAABBB", 3) == 0
		&& ft_memcmp("AAACCC", "AAABBB", 6) > 0
		&& ft_memcmp("AAAAAA", "AAACCC", 6) < 0)
		printf("ft_memcmp \e[1;92mPASS\033[0m\n");
	else
		printf("ft_memcmp \e[1;91mFAIL\033[0m\n");
}

void	test_memcpy(void)
{
	char	*dst;

	dst = malloc(7);
	bzero(dst, 6);
	ft_memcpy(dst, "AAABBB", 4);
	if (strcmp(dst, "AAAB") == 0)
		printf("ft_memcpy \e[1;92mPASS\033[0m\n");
	else
		printf("ft_memcpy \e[1;91mFAIL\033[0m\n");
}

void	test_memchr(void)
{
	if (ft_memchr("AAABBB", 'B', 3) == 0
		&& strcmp(ft_memchr("AAABBB", 'B', 6), "BBB") == 0)
		printf("ft_memchr \e[1;92mPASS\033[0m\n");
	else
		printf("ft_memchr \e[1;91mFAIL\033[0m\n");
}

int	main(void)
{
	usleep(50000);
	test_memset();
	usleep(50000);
	test_memcmp();
	usleep(50000);
	test_memcpy();
	usleep(50000);
	test_memchr();
}
