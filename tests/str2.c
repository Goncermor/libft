/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   str2.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 12:29:14 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 14:48:23 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	test_strlcat(void)
{
	char	*str;

	str = malloc(5);
	str[4] = '\0';
	strcpy(str, "AA");
	ft_strlcat(str, "BB", 4);
	if (strcmp(str, "AAB") == 0)
		printf("ft_strlcat \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strlcat \e[1;91mFAIL\033[0m\n");
}

void	test_strlcpy(void)
{
	char	*str;

	str = malloc(5);
	bzero(str, 5);
	ft_strlcpy(str, "ABC", 3);
	if (strcmp(str, "AB") == 0)
		printf("ft_strlcat \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strlcat \e[1;91mFAIL\033[0m\n");
}

void	test_strjoin(void)
{
	char	*str;

	str = ft_strjoin("AAA", "BBB");
	if (strcmp(str, "AAABBB") == 0)
		printf("ft_strjoin \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strjoin \e[1;91mFAIL\033[0m\n");
}

void	test_substr(void)
{
	char	*str;

	str = ft_substr("ABCD", 1, 2);
	if (strcmp(str, "BC") == 0)
		printf("ft_substr \e[1;92mPASS\033[0m\n");
	else
		printf("ft_substr \e[1;91mFAIL\033[0m\n");
}

int	main(void)
{
	usleep(50000);
	test_strlcat();
	usleep(50000);
	test_strlcpy();
	usleep(50000);
	test_strjoin();
	usleep(50000);
	test_substr();
}
