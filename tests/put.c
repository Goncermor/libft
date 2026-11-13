/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   put.c                                             :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/13 14:27:55 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/13 15:40:30 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	test_putchar(void)
{
	int		p[2];
	char	buf[1];

	if (pipe(p) == -1)
	{
		printf("ft_putchar_fd TEST FAILED");
		return ;
	}
	ft_putchar_fd(42, p[1]);
	close(p[1]);
	if (read(p[0], buf, sizeof(buf)) == 1 && buf[0] == 42)
		printf("ft_putchar_fd \e[1;92mPASS\033[0m\n");
	else
		printf("ft_putchar_fd \e[1;91mFAIL\033[0m\n");
	close(p[0]);
}

void	test_putstr(void)
{
	int		p[2];
	char	buf[3];

	if (pipe(p) == -1)
	{
		printf("ft_putstr_fd TEST FAILED");
		return ;
	}
	buf[2] = '\0';
	ft_putstr_fd("42", p[1]);
	close(p[1]);
	if (read(p[0], buf, sizeof(buf)) == 2 && strcmp(buf, "42") == 0)
		printf("ft_putstr_fd \e[1;92mPASS\033[0m\n");
	else
		printf("ft_putstr_fd \e[1;91mFAIL\033[0m\n");
	close(p[0]);
}

void	test_putendl(void)
{
	int		p[2];
	char	buf[4];

	if (pipe(p) == -1)
	{
		printf("ft_putendl_fd TEST FAILED");
		return ;
	}
	buf[3] = '\0';
	ft_putendl_fd("42", p[1]);
	close(p[1]);
	if (read(p[0], buf, sizeof(buf)) == 3 && strcmp(buf, "42\n") == 0)
		printf("ft_putendl_fd \e[1;92mPASS\033[0m\n");
	else
		printf("ft_putendl_fd \e[1;91mFAIL\033[0m\n");
	close(p[0]);
}

void	test_putnbr(void)
{
	int		p[2];
	char	buf[64];

	if (pipe(p) == -1)
	{
		printf("ft_putnbr_fd TEST FAILED");
		return ;
	}
	buf[11] = '\0';
	ft_putnbr_fd(-2147483648, p[1]);
	close(p[1]);
	if (read(p[0], buf, sizeof(buf)) == 11 && strcmp(buf, "-2147483648") == 0)
		printf("ft_putnbr_fd \e[1;92mPASS\033[0m\n");
	else
		printf("ft_putnbr_fd \e[1;91mFAIL\033[0m\n");
	close(p[0]);
}

int	main(void)
{
	usleep(50000);
	test_putchar();
	usleep(50000);
	test_putstr();
	usleep(50000);
	test_putendl();
	usleep(50000);
	test_putnbr();
}
