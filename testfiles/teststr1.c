/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:54:28 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/30 20:04:11 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_teststr1(const char *s, char *t)
{
	char	**test;
	char	*test2;

	test = &t;
//strlen
	printf("strlen:\n %s, %d\n will it be 4 or 5?\n\n", s, (int)ft_strlen(s));
//strdup
	*test = ft_strdup(s);
	printf("strdup:\n %s\n should be 6969\n\n", *test);
//strcpy
	printf("strcpy: same size\n %s\n should say fuck\n", ft_strcpy(*test, "fuck"));
	printf("strcpy: longer\n %s\n does it say fucker or does it just fail?\n", ft_strcpy(*test, "fucker"));
	printf("strcpy: shorter\n %s\n should say lol\n\n", ft_strcpy(*test, "lol"));
//strncpy
	printf("strncpy: 'fuck', 4:\n %s\n does it say fuck?\n", ft_strncpy(*test, "fuck", 4));
	printf("strncpy: 'fuck', 2:\n %s\n should say fu\n", ft_strncpy(*test, "fuck", 2));
	printf("strncpy: 'fucker', 6:\n %s\n the destination string was 'fuck' so what happens?\n\n", ft_strncpy(*test, "fucker", 6));
	test2 = (char *)malloc(sizeof(char) * 9);
	test2 = ft_strcpy(test2, "fuck");
	test = &test2;
//strcat
	printf("strcat: 'fuck', 'shit;'\n %s\n did that work?\n\n", ft_strcat(*test, "shit"));
//strncat
	test2 = ft_strcpy(test2, "fuck");
	printf("strncat: 'fuck', 'eratic', 2\n %s\n\n", ft_strncat(*test, "eratic", 2));
//strlcat
	ft_strcpy(test2, "fuck");
	printf("strlcat: src is shorter than size:\n 'fuck', 'er', 9\n %s, %d\n", *test, (int)ft_strlcat(*test, "er", 9));
	ft_strcpy(test2, "fuck");
	printf("strlcat: src is longer than size:\n 'fuck', 'bitches', 6\n %s, %d\n\n", *test, (int)ft_strlcat(*test, "bitches", 6));
//strchr
	printf("strchr: 'lmfao', 'a'\n %s\n should say ao\n\n", ft_strchr("lmfao", 'a'));
//strrchr
	printf("strrchr:'aaayy lmao', 'a'\n %s\n should say o\n\n", ft_strrchr("aaayy lmao", 'a'));
//strstr
	printf("strstr: huberjubernub, jub:\n %s\n should say jubernub\n", ft_strstr("huberjubernub", "jub"));
	printf("strstr:\n needle doesn't exist: 'funday', ''\n %s\n should say funday\n", ft_strstr("funday", ""));
	printf("strstr: needle can't be found:\n 'needle', 'haystack':\n %s\n should be null\n\n", ft_strstr("haystack", "needle"));
//strnstr
	printf("strnstr: 'djent', 'ent'\n search full string:\n %s\n", ft_strnstr("djent", "ent", 6));
	printf("strnstr: 'bunghole', 'hole':\n beginning is in search area, end isn't: \n%s\n did found ent yeah?\n", ft_strnstr("bunghole", "hole", 5));
	printf("strnstr: 'turtle', 'dove':\n needle can't be found: %s\nshould be null pointer\n", ft_strnstr("turtle", "dove", 2));
	printf("strnstr: 'pembis', '':\n needle doesn't exist:\n %s\n should be pembis\n\n", ft_strnstr("pembis", "", 4));
//strcmp
	printf("strcmp: 'fuck', 'fuck':\n %d\n should be 0\n", ft_strcmp("fuck", "fuck"));
	printf("strcmp: 'fuck', 'fuc':\n %d\n should not be 0\n\n", ft_strcmp("fuck", "fuc"));
//strncmp
	printf("strncmp: check whole string:\n 'fuck', 'fuck', 5:\n %d\n should be 0\n", ft_strncmp("fuck", "fuck", 5));
	printf(" strings dif\n 'fuck', 'fuc', 5\n %d\n shouldn't be 0\n", ft_strncmp("fuck", "fuc", 5));
	printf(" strings dif but stop checkin b4 dif\n 'fuck', 'fuc', 3\n %d\n should be 0\n\n", ft_strncmp("fuck", "fuc", 3));
}
