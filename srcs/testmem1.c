/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:49:36 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/26 17:50:42 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_testmem1(const char *s, char *t)
{
	char	**test;
	void	*null = NULL;

	test = &t;
	write(1, "ft_memalloc:\n", 13);
	if ((null = ft_memalloc(5)))
		write(1, " success!\n", 14);
	else
		printf(" failure...\n");
	printf("bzero:\n");
	ft_memset(*test, 'a', 4);
	printf(" input string: %s\n", *test);
	ft_bzero(*test, 5);
	printf(" ouput: %s\n should be empty\n\n", *test);
//memccpy
	printf("memccpy: testing for 9\n %s\n should be 69\n", ((char *)ft_memccpy(*test, s, '9', 5) - 2));
	printf("memccpy: testing for 1:\n%s\n should be null\n%s\n should be 6969\n\n", (char *)ft_memccpy(*test, s, '1', 5), *test);
//memchr
	printf("memchr: testing for 9:\n %s\n should be 969\n", (char *)ft_memchr(s, '9', 3));
	printf("memchr: testing for failure:\n %s\n should be null\n\n", (char *)ft_memchr(s, '1', 5));
//memcmp
	printf("memcmp: testing identical:\n result = %d\n should say 0\n", ft_memcmp(s, "6969", 5));
	printf("memcmp: testing different:\n result = %d\n should say 1\n\n", ft_memcmp(s, "6968", 5));
//memcpy
	printf("memcpy: testing same size copy:\n %s\n should be fuck\n", (char *)ft_memcpy(*test, "fuck", 5));
	printf("memcpy: testing shorter string\n %s\n should be gay\n", (char *)ft_memcpy(*test, "gay", 4));
	printf("memcpy: testing longer string\n %s\n should say bitch\n\n", (char *)ft_memcpy(*test, "bitch", 6));
//memmove
	printf("memmove: testing whole string:\n %s\n should be shit\n", (char *)ft_memmove(*test, "shit", 5));
	printf("memmove: moving less of the string:\n %s\n gonna find out if this says bit or not\n", (char *)ft_memmove(*test, "bitch", 3));
	printf("memmove: testing long string:\n %s\n I wonder what it says\n\n", (char *)ft_memmove(*test, "fucker", 7));
//memset
	ft_memcpy(*test, "fuck", 5);
	printf("memset: gimme a d\n %s\n have many a d?\n\n", (char *)memset(*test, 'd', 4));
}
