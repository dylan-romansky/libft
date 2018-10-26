/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:49:36 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 23:10:15 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_testmem1(const char *s, char *t, void *n, int result)
{
	char	**test;
	void	*null;

	test = &t;
	null = n;
	write(1, "ft_memalloc:\n", 13);
	if ((null = ft_memalloc(5)))
		write(1, " success!\n", 14);
	else
		printf(" failure...\n");
	printf("bzero:\n");
	ft_memset(*test, 'a', 4);
	ft_bzero(*test, 5);
	printf(" %s\n should be empty\n", *test);
	write(1, "memccpy: testing for 9\n", 23);
	if ((*test = (char *)ft_memccpy(*test, s, '9', 5)))
		printf(" %s\n should be 69\n", (*test - 2));
	else
		write(1, " failure...\n", 12);
	write(1, "memccpy: testing for 1:\n", 24);
	if (NULL == (char *)ft_memccpy(*test, s, '1', 5))
		printf(" %s\n should be 6969\n", *test);
	else
		write(1, " failure...\n", 12);
	write(1, "memchr: testing for 9:\n", 23);
	if ((*test = ft_memchr(s, '9', 3)))
		printf(" %s\n should be 969\n", *test);
	else
		write(1, " failure...\n", 12);
	write(1, "memchr: testing for failure:\n", 29);
	if ((null = ft_memchr(s, '9', 1)))
		write(1, " success!\n", 10);
	else
		write(1, " failure...\n", 12);
	write(1, "memcmp: testing identical:\n", 27);
	if ((result = ft_memcmp(s, "6969", 5)))
		printf(" result = %d\n", result);
	else
		write(1, " failure...\n", 12);
	write(1, "memcmp: testing different:\n", 27);
	if ((result = ft_memcmp(s, "6968", 5)))
		printf(" result = %d\n", result);
	else
		write(1, " failure...\n", 12);
	write(1, "memcpy: testing same size copy:\n", 32);
	if((*test = ft_memcpy(test, "fuck", 5)))
		printf(" %s\n should be fuck\n", *test);
	else
		write(1, " failure...\n", 12);
	write(1, "memcpy: testing shorter string\n", 31);
	if ((*test = ft_memcpy(test, "gay", 4)))
		printf(" %s\n should be gay\n", *test);
	else
		write (1, " failure...\n", 12);
	write(1, "memcpy: testing longer string\n", 30);
	if ((*test = ft_memcpy(test, "bitch", 6)))
		printf(" %s\n should say bitch\n", *test);
	else
		write(1, " it was undefined behaviour anyway\n", 35);
	write(1, "memmove: testing whole string:\n", 31);
	if ((*test = ft_memmove(test, "shit", 5)))
		printf(" %s\n should be shit\n", *test);
	else
		write(1, " failure...", 12);
	write(1, "memmove: testing less of the string:\n", 37);
	if ((*test = ft_memmove(test, "bitch", 3)))
		printf(" %s\n gonna find out if this says bit or not\n", *test);
	else
		write(1, " failure...\n", 12);
	write (1, "memmove: testing long string:\n", 30);
	if ((*test = ft_memmove(test, "fucker", 7)))
		printf(" %s\n I wonder what it says\n", *test);
	else
		write(1, " I expected it to fail\n", 23);
	write(1, "memset: gimme a d\n", 18);
	if ((*test = (char *)memset(test, 'd', 5)))
		printf(" %s\n have many a d?\n", *test);
	else
		write(1, " failure...\n", 12);
}
