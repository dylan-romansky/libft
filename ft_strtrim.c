/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:52:29 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/24 15:08:50 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strtrimlen(char const *str)
{
	int	i;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str)
	{
		str++;
		i++;
	}
	if (*(str - 1) == ' ' || *(str - 1) == '\n' || *(str - 1) == '\t')
	{
		str--;
		while (*str == ' ' || *str == '\n' || *str == '\t')
		{
			i--;
			str--;
		}
	}
	return (i);
}

char		*ft_strtrim(char const *s)
{
	char	*n;
	int		i;

	i = ft_strtrimlen(s);
	if ((n = (char *)malloc(sizeof(char) * i--)))
	{
		while (*s == ' ' || *s == '\n' || *s == '\t')
			s++;
		while (i--)
			*(n++) = *(s++);
		*n = '\0';
		return (n);
	}
	return (NULL);
}
