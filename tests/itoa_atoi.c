/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   itoa_atoi.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/10 16:19:13 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/12 16:17:34 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool	test_atoi(char *ns, int ni)
{
	if (ft_atoi(ns) == ni)
		return (true);
	else
		return (false);
}

bool	test_itoa(char *ns, int ni)
{
	if (strcmp(ft_iota(ni), ns) == 0)
		return (true);
	else
		return (false);
}

int	main(void)
{
	int	num;

	num = -2147483648;
	while (num <= 2147483647)
	{
		if (test_atoi(atoi(num), num) == false)
		{
			ft_putendl_fd("ft_atoi \e[1;91mFAIL\033[0m", 1);
			return (1);
		}
	}
	ft_putendl_fd("ft_atoi \e[1;92mPASS\033[0m", 1);
	num = -2147483648;
	while (num <= 2147483647)
	{
		if (test_itoa(atoi(num), num) == false)
		{
			ft_putendl_fd("ft_itoa \e[1;91mFAIL\033[0m", 1);
			return (1);
		}
	}
	ft_putendl_fd("ft_itoa \e[1;92mPASS\033[0m", 1);
}
