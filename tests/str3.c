/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   str3.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 12:29:14 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 15:55:41 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

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

char	f(unsigned int index, char c)
{
	(void) index;
	(void) c;
	return ('B');
}

void	test_strmapi(void)
{
	char	*str;

	str = ft_strmapi("AAA", f);
	if (strcmp(str, "BBB") == 0)
		printf("ft_strmapi \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strmapi \e[1;91mFAIL\033[0m\n");
}

int	main(void)
{
	usleep(50000);
	test_strncmp();
	usleep(50000);
	test_strrchr();
	usleep(50000);
	test_strmapi();
}
