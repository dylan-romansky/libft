/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:34:46 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 21:48:15 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		main(void)
{
	const char *s = "6969";
	char 		*test;
	void		*null;
	int			result;

	null = NULL;
	result = 0;
	test = (char *)malloc(sizeof(char) * 5);
	write(1, "Testing functions...\n", 21);
	ft_testmem1(s, test, null, result);
	ft_teststr1(s, test, null, result);
	ft_testoddities();
	ft_testmem2();
}
