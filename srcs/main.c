/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:34:46 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/26 16:04:06 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		main(void)
{
	const char *s = "6969";
	char 		*test;

	test = (char *)malloc(sizeof(char) * 5);
	write(1, "Testing functions...\n", 21);
	ft_testmem1(s, test);
	ft_teststr1(s, test);
	ft_testoddities();
	ft_testmem2();
}
