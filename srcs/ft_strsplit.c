/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 23:06:12 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/29 17:47:41 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_skipdelim(char const *st, char d)
{
	size_t i;

	i = 0;
	while (st[i] == d)
		i++;
	return (i);
}

static size_t	ft_wordlen(char const *str, char e)
{
	size_t j;

	j = 1;
	while (str[j] != e)
		j++;
	return (j);
}

static size_t	ft_wordcount(char const *rts, char f)
{
	size_t wee;

	wee = 1;
	while (*rts)
	{
		rts += ft_skipdelim(rts, f);
		if (*rts)
		{
			rts += ft_wordlen(rts, f);
			wee++;
		}
	}
	return (wee);
}

char			**ft_strsplit(char const *s, char c)
{
	int		a;
	int		bee;
	char	**n;

	a = 0;
	bee = 0;
	if ((n = (char **)ft_memalloc(ft_wordcount(s, c))))
	{
		while (*s)
		{
			a += ft_skipdelim(s, c);
			if (*s)
			{
				n[bee] = (char *)ft_memalloc(ft_wordlen((s + a), c));
				ft_memcpy(n[bee++], (s + a), ft_wordlen((s + a), c));
				a += ft_wordlen((s + a), c);
			}
		}
		n[bee] = ft_memalloc(1);
		ft_bzero(n[bee], 1);
		return (n);
	}
	return (NULL);
}
