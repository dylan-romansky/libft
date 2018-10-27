/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testoddities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 21:28:13 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/26 15:15:05 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_testoddities(void)
{
//atoi
	printf("atoi:\n positives:\n input: 1234\n result: %d\n", ft_atoi("1234"));
	printf(" negatives:\n input: -1234\n result: %d\n", ft_atoi("-1234"));
	printf(" odd cases: input: -0, jag24, 69gds, $()_+- z, jaf-fgs-69420\n results: %d, %d, %d, %d, %d\n", ft_atoi("-0"), ft_atoi("jag24"), ft_atoi("69gds"), ft_atoi("$()_+- z"), ft_atoi("jaf-fgs-69420"));
//isalpha
	printf("isalpha:\n input: a, 0\n output: %d, %d\n should be 1, 0\n\n", ft_isalpha('a'), ft_isalpha('0'));
//isdigit
	printf("isdigit:\n input: a, 0\n output: %d, %d\n should be 0, 1\n\n", ft_isdigit('a'), ft_isdigit('0'));
//isalnum
	printf("isalnum:\n input: a, 0, -\n output: %d, %d, %d\n should be 1, 1, 0\n\n", ft_isalnum('a'), ft_isalnum('0'), ft_isalnum('-'));
//isascii
	printf("isascii:\n input: 'a', '8', 188,'-'\n ouput: %d, %d, %d, %d\n should be 1, 1, 0, 1\n", ft_isascii('a'), ft_isascii('8'), ft_isascii(188), ft_isascii('-'));
//isprint
	printf("isprint:\n input: 9 (TAB), 48 ('0'), newline, ' '\n output: %d, %d, %d, %d\n should be 0, 1, 1, 1\n", ft_isprint(9), ft_isprint(48), ft_isprint('\n'), ft_isprint(' '));
//toupper
	printf("toupper:\n input: a, A\n result: %c, %c\n should look like A, A\n", ft_toupper('a'), ft_toupper('A'));
//tolower
	printf("tolower:\n input: a, A\n result: %c, %c\n should look like a, a\n", ft_tolower('a'), ft_tolower('A'));
}
