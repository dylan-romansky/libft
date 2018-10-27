/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststr2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:40:57 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 18:19:59 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static void	ft_setk(char *f)
{
	*f = 'k';
}

static void	ft_setr(unsigned int k, char *c)
{
	c[k] = 'r';
}

static char	ft_add1(char c)
{
	return (c + 1);
}

static char	ft_addi(unsigned int k, char c)
{
	return (c + k);
}

void		ft_teststr2(void)
{
	char	*s;
	char	**t;

//strnew
	s = ft_strnew(5);
	printf("strnew: making string...  address: %p\n", s);
	t = &s;
//strdel
	ft_strcpy(*t, "tttt");
	printf("writing to string...\n contents: %s", *t);
	printf("strdel: deleting string '%s'... ", *t);
	ft_strdel(t);
	if (!s)
		printf("success!\n");
	else
		printf("failure...\n");
//strclr
	s = ft_strnew(5);
	t = &s;
	ft_memset(*t, 'a', 4);
	printf("ft_strclr: clearing string %s... ", s);
	if (s[0] == '\0')
		printf("success!\n");
	else
	    printf("failure...\n");
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
	printf("strmapi: add index to character cuz idk how else its index is useful:\n %s: did it work?\n", ft_strmapi(s, ft_addi));
}
