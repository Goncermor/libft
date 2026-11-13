/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   str4.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 15:50:58 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 16:18:23 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"
#include <unistd.h>
#include <string.h>

void	test_strnstr(void)
{
	if (strcmp(ft_strnstr("AABBCC", "", 2), "AABBCC") == 0
			&& strcmp(ft_strnstr("AABBCC", "BB", 2), "BBCC") == 0)
	printf("ft_strncmp \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strncmp \e[1;91mFAIL\033[0m\n");
}

// It's really needed
static int	p[2];

void	f(unsigned int index, char *c)
{
	(void) index;
	(void) c;
	write(p[1], c, 1);
}

void	test_striteri(void)
{
	char	buf[5];

	if (pipe(p) == -1)
	{
		printf("ft_striteri test failed");
		return ;
	}
	buf[4] = '\0';
	ft_striteri("ABCD", f);
	close(p[1]);
	if (read(p[0], buf, sizeof(buf)) == 4
			&& strcmp(buf, "ABCD") == 0)
	printf("ft_striteri \e[1;92mPASS\033[0m\n");
	else
		printf("ft_striteri \e[1;91mFAIL\033[0m\n");
	close(p[0]);
}

int	main(void)
{
	test_striteri();
}
