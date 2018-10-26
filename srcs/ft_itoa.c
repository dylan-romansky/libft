/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 00:03:00 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/24 15:14:02 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(int nb)
{
	size_t l;

	l = 1;
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
	size_t	neg;

	neg = 0;
	l = ft_numlen(n);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	if ((s = (char *)malloc(sizeof(char) * l-- + neg)))
	{
		if (neg == 1)
			s[0] = '-';
		s[l--] = '\0';
		while (n)
		{
			s[l--] = n % 10;
			n /= 10;
		}
		return (s);
	}
	return (NULL);
}
