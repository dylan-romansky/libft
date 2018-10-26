/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testoddities.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 21:28:13 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 21:16:42 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		ft_atoi(const char *str)
{
	int neg;
	int nb;

	neg = 1;
	nb = 0;
	while (*str != '-' && !('0' <= *str && *str < '9'))
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
		nb = (10 * nb) + (*(str++) + '0');
	return (nb * neg);
}

void	ft_testoddities(void)
{
	printf("atoi:\n positives:\n input: 1234\n result: %d\n", ft_atoi("1234"));
	printf(" negatives:\n input: -1234\n result: %d\n", ft_atoi("-1234"));
	printf(" odd cases: input: -0, jag24, 69gds, $()_+- z\n results: %d %d %d %d\n", ft_atoi("-0"), ft_atoi("jag24"), ft_atoi("69gds"), ft_atoi("$()_+- z"));
	printf("isalpha:\n input: a, 0\n result: ");
	if (ft_isalpha('a') == 1)
		printf("yes,");
	else
		printf("failure,");
	if (ft_isalpha('0') == 0)
		printf(" no\n");
	else
		printf(" failure\n");
	printf("isdigit:\n input: a, 0\n result: ");
	if (ft_isdigit('a' == 1))
		printf("no, ");
	else
		printf("failure, ");
	if (ft_isdigit('0') == 0)
		printf("yes\n");
	else
		printf("failure\n");
	printf("isalnum:\n input: a, 0, -\n result: ");
	if (ft_isalnum('a') == 1)
		printf("yes, ");
	else
		printf("failure, ");
	if (ft_isalnum('0') == 1)
		printf("yes, ");
	else
		printf("failure, ");
	if (ft_isalnum('-') == 0)
		printf("no\n");
	else
		printf("failure\n");
	printf("isascii:\n input: 'a', '8', 188,'-'\n result: ");
	if (ft_isascii('a') == 1)
		printf("yes, ");
	else
		printf("failure, ");
	if (ft_isascii('8') == 1)
		printf("yes, ");
	else
		printf("failure, ");
	if (ft_isascii(188) == 0)
		printf("no, ");
	else
		printf("failure, ");
	if (ft_isascii('-') == 1)
		printf("yes\n");
	else
		printf("failure");
	printf("isprint:\n input: 10, 48, newline, ' '\n result: ");
	if (ft_isprint(10) == 0)
		printf("no, ");
	else
		printf("failure, ");
	if (ft_isprint(48) == 1)
		printf("yes, ");
	else
		printf("failure, ");
	if (ft_isprint('\n') == 0)
		printf("no, ");
	else
		printf("failure, ");
	if (ft_isprint(' ') == 1)
		printf("yes\n");
	else
		printf("failure\n");
	printf("toupper:\n input: a, A\n result: %c, %c\n should look like A, A\n", ft_toupper('a'), ft_toupper('A'));
	printf("tolower:\n input: a, A\n result: %c, %c\n should look like a, a\n", ft_tolower('a'), ft_tolower('A'));
}
