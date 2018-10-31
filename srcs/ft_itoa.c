/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 00:03:00 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/29 21:09:55 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int nb)
{
	size_t l;

	l = 1;
	if (nb == 0)
		return (2);
	while (nb)
	{
		nb /= 10;
		l++;
	}
	return (l);
}

char			*ft_itoa(int n)
{
	char	*s;
	size_t	l;

	l = ft_numlen(n);
	if (n < 0)
		l++;
	if ((s = (char *)malloc(sizeof(char) * l--)))
	{
		if (n < 0)
		{
			s[0] = '-';
			n = -n;
		}
		s[l--] = '\0';
		if (n == 0)
			s[0] = '0';
		while (n)
		{
			s[l--] = (n % 10) + '0';
			n /= 10;
		}
		return (s);
	}
	return (NULL);
}
