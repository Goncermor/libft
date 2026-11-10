/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: gcerto-m <gcerto-m@student.42porto.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/04 12:00:11 by gcerto-m         #+#    #+#              */
/*   Updated: 2026/11/09 15:00:44 by gcerto-m        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/// @brief 
/// @param s 
/// @param c 
/// @return 
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (0);
}
