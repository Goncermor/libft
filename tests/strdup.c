/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   strdup.c                                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/03 12:20:56 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/06 14:52:35 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../libft.h"

int	main(int argc, char *argv[])
{
	char	*dup_ptr;
	char	*dup_ptr2;

	if (argc > 1)
	{
		dup_ptr = strdup(argv[1]);
		printf("strdup(\"%s\" @ %p) -> \"%s\" @ %p\n",
			argv[1], argv[1],
			dup_ptr, dup_ptr);
		dup_ptr2 = ft_strdup(argv[1]);
		printf("ft_strdup(\"%s\" @ %p) -> \"%s\" @ %p\n",
			argv[1], argv[1],
			dup_ptr2, dup_ptr2);
		free(dup_ptr);
		free(dup_ptr2);
		return (0);
	}
	else
	{
		printf("Invalid argument:\n\tProgram use: %s <string>\n", argv[0]);
		return (1);
	}
}
