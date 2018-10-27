/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:54:28 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/26 18:02:21 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_teststr1(const char *s, char *t)
{
	char	**test;
	char	*test2;

	test = &t;
//strlen
	printf("strlen:\n %d\n will it be 4 or 5?\n", (int)ft_strlen(s));
//strdup
	*test = ft_strdup(s);
	printf("strdup:\n %s\n should be 6969\n", *test);
//strcpy
	printf("strcpy: same size\n %s\n should say fuck\n", ft_strcpy(*test, "fuck"));
	printf("strcpy: longer\n %s\n does it say fucker or does it just fail?\n", ft_strcpy(*test, "fucker"));
	printf("strcpy: shorter\n %s\n should say gay\n", ft_strcpy(*test, "gay"));
//strncpy
	printf("strncpy: same size:\n %s\n does it say fuck?\n", ft_strncpy(*test, "fuck", 4));
	printf("strncpy: shorter:\n %s\n does it say fu?\n", ft_strncpy(*test, "fuck", 2));
	printf("strncpy: longer: \n %s\n what happens?", ft_strncpy(*test, "fucker", 6));
	test2 = (char *)malloc(sizeof(char) * 9);
//strcat
	printf("strcat: %s\n did that work?\n", ft_strcat("fuck", "shit"));
//strncat
	printf("strncat: %s\n", ft_strncat("fuck", "eratic", 2));
//strlcat
	ft_strcpy(test2, "fuck");
	printf("strlcat: %s, %d\n", *test, (int)ft_strlcat(*test, "er", 9));
//strchr
	printf("strchr: %s\n what it do?\n", ft_strchr("lmfao", 'f'));
//strrchr
	printf("strrchr: %s\n what they say?", ft_strrchr("aaayy lmao", 'a'));
//strstr
	printf("strstr: huberjubernub, jub:\n %s\n", ft_strstr("huberjubernub", "jub"));
	printf("strstr:\n needle doesn't exist: 'funday', ''\n %s\n should say funday\n", ft_strstr("funday", ""));
	printf("strstr: needle can't be found:\n 'needle', 'haystack':\n %s\n should be null\n", ft_strstr("haystack", "needle"));
//strnstr
	printf("strnstr: 'djent', 'ent'\n search full string:\n %s\n", ft_strnstr("djent", "ent", 6));
	printf("strnstr: 'bunghole', 'hole':\n beginning is in search area, end isn't: \n%s\n did found ent yeah?\n", ft_strnstr("bunghole", "hole", 5));
	printf("strnstr: 'turtle', 'dove':\n needle can't be found: %s\nshould be null pointer\n", ft_strnstr("turtle", "dove", 2));
	printf("strnstr: 'pembis', '':\n needle doesn't exist:\n %s\n should be pembis\n", ft_strnstr("pembis", "", 4));
//strcmp
	printf("strcmp: 'fuck', 'fuck':\n %d\n should be 0\n", ft_strcmp("fuck", "fuck"));
	printf("strcmp: 'fuck', 'fuc':\n %d\n should be 1\n", ft_strcmp("fuck", "fuc"));
//strncmp
	printf("strncmp: we ditchin the write command:\n");
	printf("strncmp: check whole string:\n'fuck', 'fuck':\nstrings same\n %d\n should be 0\n", ft_strncmp("fuck", "fuck", 5));
	printf(" strings dif\n %d\n defs dif\n", ft_strncmp("fuck", "fuc", 5));
	printf(" strings dif but stop checkin b4 dif\n %d\n winrar\n", ft_strncmp("fuck", "fuc", 3));
}
