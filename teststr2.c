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

	printf("strnew: making string... ");
	if ((s = ft_strnew(5)))
		printf("succes!\n");
	else
	{
		printf("failure...\n");
		return ;
	}
	ft_memset(s, 'f', 4);
	printf("strdel: deleting string '%s'... ", s);
	ft_strdel(&s);
	if (!s)
		printf("success!\n");
	else
		printf("failure...\n");
	s = ft_strnew(5);
	ft_memset(s, 'a', 4);
	printf("ft_strclr: clearing string %s... ", s);
	if (s[0] == '\0')
		printf("success!\n");
	else
		printf("failure...\n");
	ft_memset(s, 'w', 4);
	printf("striter: %s\n set each char to 'k':\n ", s);
	ft_striter(s, ft_setk);
	printf("%s: did it work?\n", s);
	printf("striteri: set each char to 'r':\n ");
	ft_striteri(s, ft_setr);
	printf("%s: did it work?\n", s);
	printf("strmap: add 1 to char:\n %s: did it work?\n", ft_strmap(s, ft_add1));
	printf("strmapi: add index to character cuz idk how else its index is useful:\n %s: did it work?\n", ft_strmapi(s, ft_addi));
}
