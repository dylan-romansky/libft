/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststr2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:40:57 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/29 20:00:42 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	ft_setk(char *f)
{
	*f = 'k';
}

static void	ft_setr(unsigned int k, char *c)
{
	if (k == 0)
		*c = 'r';
	if (k)
		*c = 'r';
}

static char	ft_add1(char c)
{
	return (c + 1);
}

static char	ft_skip1(unsigned int k, char c)
{
	if (k)
		return(ft_add1(c));
	return (c);
}

void		ft_teststr2(void)
{
	char	*s;
	char	**t;
	int		i = 0;

//strnew
	s = ft_strnew(5);
	printf("strnew: making string...  address: %p\n\n", s);
	t = &s;
//strdel
	ft_memset(s, 'f', 4);
	printf("strdel: deleting string '%s'...\n", *t);
	ft_strdel(t);
	if (!s)
		printf("%s\nsuccess!\n\n", *t);
	else
		printf("%s\nfailure...\n\n", *t);
//strclr
	s = ft_strnew(5);
	t = &s;
	ft_memset(*t, 'a', 4);
	printf("ft_strclr: clearing string %s...\n", s);
	ft_strclr(*t);
	printf(" result: %s\n", s);
	if (s[0] == '\0')
		printf("success!\n\n");
	else
		printf("failure...\n\n");
//striter
	ft_memset(*t, 'w', 4);
	printf("striter: %s\n set each char to 'k':\n ", *t);
	ft_striter(*t, ft_setk);
	printf("%s: did it work?\n", s);
//striteri
	printf("striteri: set each char to 'r':\n ");
	ft_striteri(*t, ft_setr);
	printf("%s: did it work?\n", s);
//strmap
	printf("strmap: add 1 to char:\n %s: did it work?\n", ft_strmap(*t, ft_add1));
//strmapi
	printf("strmapi: add 1 to every character except the first:\n %s: did it work?\n", ft_strmapi(*t, ft_skip1));
//strequ
	printf("strequ: 'fuck', fuc' & 'fuck', 'fuck' & 'fuck', 'fucker' & 'fucker', 'fuck'\n results: %d, %d, %d, %d\n expected: 0, 1, 0, 0\n\n", ft_strequ("fuck", "fuc"), ft_strequ("fuck", "fuck"), ft_strequ("fuck", "fucker"), ft_strequ("fucker", "fuck"));
//strnequ
	printf("strnequ: 'fuck', 'fuck', 4 & 'fuc', 'fuck', 4 & 'fuc', 'fuck', 3\n resutls: %d, %d, %d\n expected: 1, 0, 1\n\n", ft_strnequ("fuck", "fuck", 4), ft_strnequ("fuc", "fuck", 4), ft_strnequ("fuc", "fuck", 3));
//strsub
	printf("strsub: 'spaghetti fuck-knuckle', 10, 4\n result: %s\n expected: fuck\n\n", ft_strsub("spaghetti fuck-knuckle", 10, 4));
//strjoin
	printf("strjoin: 'spaghetti', ' fuck-knuckle'\n result: %s\n expected: spaghetti fuck-knuckle\n\n", ft_strjoin("spaghetti", " fuck-knuckle"));
//strtrim
	printf("strtrim: '  \twhite 21 is the maximum fun\n\t    '\n result: '%s'\n\n", ft_strtrim("  \twhite 21 is the maximum fun\n\t    "));
//strsplit
	t = ft_strsplit("white 21 is the maximum fun", ' ');
	printf("strsplit: 'white 21 is the maximum fun', ' '\n result: ");
	while (i < 6)
	{
		printf("'%s'", t[i]);
		i++;
	}
	printf("\n\n");
}
