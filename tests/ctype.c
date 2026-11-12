/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ctype.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/10 16:19:13 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/12 16:35:38 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void	test(int (f1)(int), int (f2)(int), char *fname)
{
	bool	error;
	int		c;

	c = 0;
	error = false;
	while (c != 255)
	{
		if ((bool) f1(c) != (bool) f2(c))
		{
			error = true;
			printf("Error: %i", c);
		}
		c++;
	}
	ft_putstr_fd(fname, 1);
	if (error == true)
		ft_putendl_fd(" \e[1;91mFAIL\033[0m", 1);
	else
		ft_putendl_fd(" \e[1;92mPASS\033[0m", 1);
}

int	main(void)
{
	test(ft_isalnum, isalnum, "ft_isalnum");
	test(ft_isalpha, isalpha, "ft_isalpha");
	test(ft_isdigit, isdigit, "ft_isdigit");
	test(ft_isprint, isprint, "ft_isprint");
	test(ft_tolower, tolower, "ft_tolower");
	test(ft_toupper, toupper, "ft_toupper");
}
