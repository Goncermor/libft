/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   str.c                                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 12:29:14 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 14:08:50 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
striteri
strjoin
strlcat
strlcpy
strlen
strmapi
strrchr
strtrim
substr
*/

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	test_bzero(void)
{
	char	*str;

	str = malloc(4);
	memset(str, 0, 4);
	strcpy(str, "ABC");
	ft_bzero(str, 3);
	if (str[0] == 0 && str[1] == 0 && str[2] == 0)
		printf("ft_bzero \e[1;92mPASS\033[0m\n");
	else
		printf("ft_bzero \e[1;91mFAIL\033[0m\n");
}

void	test_strchr(void)
{
	if (strcmp(ft_strchr("AAABBB", 'B'), "BBB") == 0)
		printf("ft_strchr \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strchr \e[1;91mFAIL\033[0m\n");
}

void	test_strdup(void)
{
	char	*str;

	str = ft_strdup("AAABBB");
	if (strcmp(str, "AAABBB") == 0)
		printf("ft_strdup \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strdup \e[1;91mFAIL\033[0m\n");
}

void	test_strlen(void)
{
	if (ft_strlen("AAABBB") == 6)
		printf("ft_strlen \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strlen \e[1;91mFAIL\033[0m\n");
}

int	main(void)
{
	usleep(50000);
	test_bzero();
	usleep(50000);
	test_strchr();
	usleep(50000);
	test_strdup();
	usleep(50000);
	test_strlen();
}
