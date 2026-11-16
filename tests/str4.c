/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   str4.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 15:50:58 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/16 15:08:03 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../libft.h"
#include <unistd.h>
#include <string.h>

void	test_strnstr(void)
{
	if (strcmp(ft_strnstr("AABBCC", "", 6), "AABBCC") == 0
			&& strcmp(ft_strnstr("AABBCC", "BB", 4), "BBCC") == 0)
	printf("ft_strncmp \e[1;92mPASS\033[0m\n");
	else
		printf("ft_strncmp \e[1;91mFAIL\033[0m\n");
}

// It's really needed
static int	g_p[2];

void	f(unsigned int index, char *c)
{
	(void) index;
	(void) c;
	write(g_p[1], c, 1);
}

void	test_striteri(void)
{
	char	buf[5];

	if (pipe(g_p) == -1)
	{
		printf("ft_striteri test failed");
		return ;
	}
	buf[4] = '\0';
	ft_striteri("ABCD", f);
	close(g_p[1]);
	if (read(g_p[0], buf, sizeof(buf)) == 4 && strcmp(buf, "ABCD") == 0)
		printf("ft_striteri \e[1;92mPASS\033[0m\n");
	else
		printf("ft_striteri \e[1;91mFAIL\033[0m\n");
	close(g_p[0]);
}

void	test_split(void)
{
	char	**parts;
	int		i;

	parts = ft_split("a b c", ' ');
	i = 0;
	while (parts[i] != NULL)
	{
		printf("parts[%d] = \"%s\"\n", i, parts[i]);
		i++;
	}
}

int	main(void)
{
	test_striteri();
	test_strnstr();
	test_split();
}
