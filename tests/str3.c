/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   str3.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 12:29:14 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 15:05:41 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
striteri
strjoin
strlcat
strlcpy
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

/*
striteri
strmapi
strrchr
strtrim
*/

void	test_strrchr(void)
{
	if (strcmp(ft_strrchr("AAABBBCCC", 'B'), "BCCC") == 0)
		printf("ft_strrchr \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strrchr \e[1;91mFAIL\033[0m\n");
}

void	test_strncmp(void)
{
	if (ft_strncmp("AABB", "AABB", 2) == 0 && ft_strncmp("AABB", "AACC", 4) < 0)
		printf("ft_strncmp \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strncmp \e[1;91mFAIL\033[0m\n");
}

void	test_strnstr(void)
{
	if (strcmp(ft_strnstr("AABBCC", "", 2), "AABBCC") == 0
		&& strcmp(ft_strnstr("AABBCC", "BB", 2), "BBCC") == 0)
		printf("ft_strncmp \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strncmp \e[1;91mFAIL\033[0m\n");
}

int	main(void)
{
	usleep(50000);
	test_strncmp();
	usleep(50000);
	test_strrchr();
	usleep(50000);
	//test_strnstr();
}
