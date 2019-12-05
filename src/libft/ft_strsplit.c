/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 23:06:12 by dromansk          #+#    #+#             */
/*   Updated: 2019/12/04 17:47:57 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		wordlen(char const *str, char d)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != d)
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**n;
	char	*tmp;
	int		len;
	int		i;

	if (s == NULL || !(n = (char **)malloc(sizeof(char *))))
		return (NULL);
	*n = NULL;
	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			len = wordlen(s, c);
			tmp = ft_strndup(s, (size_t)len);
			n = (char **)array_join(n, sizeof(char **) * i, &tmp, sizeof(char **));
			i++;
			s += len;
		}
		else
			s++;
	}
	return (n);
}
