/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:54:28 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 23:06:53 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_teststr1(const char *s, char *t, void *n, int result)
{
	char	**test;
	void	*null;

	test = &t;
	null = n;
	write(1, "strlen:\n", 8);
	if ((result = (int)ft_strlen(s)))
		printf(" %d\n will it be 4 or 5?\n", result);
	else
		write(1, " failure...\n", 12);
	free(*test);
	write(1, "strdup:\n", 8);
	if ((*test = ft_strdup(s)))
		printf(" %s\n should be 6969\n", *test);
	else
		write(1, " failure...\n", 12);
	write(1, "strcpy: ", 8);
	if ((*test = ft_strcpy(*test, "fuck")))
		printf("same size\n %s\n should say fuck\n", *test);
	else
		write(1, "same size\n failure...\n", 22);
	if ((*test = ft_strcpy(*test, "fucker")))
		printf("longer\n %s\n does it say fucker?\n", *test);
	else
		write(1, "longer\n failure... as expected\n", 31);
	if ((*test = ft_strcpy(*test, "gay")))
		printf(" shorter\n %s\n should say gay\n", *test);
	else
		write(1, " shorter\n failure...\n", 21);
	write(1, "strncpy: ", 9);
	if ((*test = ft_strncpy(*test, "fuck", 4)))
		printf(" same size:\n %s\n does it say fuck?\n", *test);
	else
		write(1, " same size:\n failure...\n", 24);
	if ((*test = ft_strncpy(*test, "fuck", 2)))
		printf(" shorter:\n %s\n does it say fu?\n", *test);
	else
		write(1, " shorter:\n failure...\n", 22);
	if ((*test = ft_strncpy(*test, "fucker", 6)))
		printf(" longer: \n %s\n what happens?", *test);
	else
		write(1, " longer:\n undefined anyway\n", 27);
	free(*test);
	*test = (char *)malloc(sizeof(char) * 9);
	write(1, "strcat: ", 8);
	if ((*test = ft_strcat("fuck", "shit")))
		printf(" %s\n did that work?\n", *test);
	else
		write(1, " failure...\n", 12);
	write(1, "strncat: ", 9);
	if ((*test = ft_strncat("fuck", "eratic", 2)))
		printf(" %s\n", *test);
	else
		write(1, " failure...\n", 12);
	write(1, "strlcat: ", 9);
	ft_strcpy(*test, "fuck");
	if ((result = ft_strlcat("fuck", "er", 9)))
		printf(" %s, %d\n", *test, result);
	else
		write(1, " failure...\n", 12);
	free(*test);
	write(1, "strchr: ", 8);
	if ((*test = ft_strchr("lmfao", 'f')))
		printf(" %s\n what it do?\n", *test);
	else
		write(1, " failure...\n", 12);
	write(1, "strrchr: ", 9);
	free(*test);
	if((*test = ft_strrchr("aaayy lmao", 'a')))
		printf(" %s\n what they say?", *test);
	else
		write(1, " failure...\n", 12);
	free(*test);
	write(1, "strstr: huberjubernub, jub:\n", 8);
	if((*test = ft_strstr("huberjubernub", "jub")))
		printf(" %s\n", *test);
	else
		write(1, " failure...\n", 12);
	free(*test);
	write(1, " needle doesn't exist:\n", 24);
	if ((*test = ft_strstr("funday", "")))
		printf(" %s\n", *test);
	else
		write(1, " failure...\n", 12);
	free(*test);
	write(1, " needle can't be found:\n", 24);
	if ((null = ft_strstr("haystack", "needle")))
		printf(" I'm a null pointer\n");
	else
		write(1, " failure...\n", 12);
	free(*test);
	write(1, "strnstr:\n", 9);
	write(1, " search full string:\n", 21);
	if ((*test = ft_strnstr("djent", "ent", 6)))
		printf( "%s\n found a ent!\n", *test);
	else
		write(1, "failure...\n", 11);
	free(*test);
	write(1, " beginning is in search area, end isn't: \n", 42);
	if ((*test = ft_strnstr("bunghole", "hole", 5)))
		printf("%s\n did found ent yeah?\n", *test);
	else
		write(1, "failure...\n", 11);
	free(*test);
	write(1, " string doesn't exist in string:\n", 33);
	if ((null = ft_strnstr("turtle", "dove", 2)))
		printf(" I'm still a null pointer\n");
	free(*test);
	write(1, " needle doesn't exist:\n", 23);
	if ((*test = ft_strnstr("pembis", "", 4)))
		printf(" %s\n", *test);
	else
		write(1, " failure...\n", 12);
	free(*test);
	write(1, "strcmp:\n", 8);
	result = ft_strcmp("fuck", "fuck");
	if (result == 0)
		printf(" %d\n dey da saem!\n", result);
	else
		write(1, " failure...\n", 12);
	result = ft_strcmp("fuck", "fuc");
	if (result != 0)
		printf(" %d\n dey not da saem!\n", result);
	else
		write(1, " failure...\n", 12);
	printf("strncmp: we ditchin the write command:\n");
	result = ft_strncmp("fuck", "fuck", 5);
	if (result == 0)
		printf(" strings same\n %d\n dun diddly\n", result);
	else
		printf(" strings same\n %d\n din doodly\n", result);
	result = ft_strncmp("fuck", "fuc", 5);
	if (result != 0)
		printf(" strings dif\n %d\n defs dif\n", result);
	else
		printf(" strings dif\n %d\n din do dif thang", result);
	result = ft_strncmp("fuck", "fuc", 3);
	if (result == 0)
		printf(" strings dif but stop checkin b4 dif\n %d\n winrar\n", result);
	else
		printf(" strings dif but stop checkin b4 dif\n %d\n losrar\n", result);
}
