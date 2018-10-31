/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:07:02 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/29 20:04:25 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int neg;
	int nb;

	neg = 1;
	while (*str != '-' && !('0' <= *str && *str < '9'))
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	if ('0' <= *str && *str <= '9')
	{
		nb = 0;
		while ('0' <= *str && *str <= '9')
			nb = (10 * nb) + (*(str++) - '0');
		return (nb * neg);
	}
	nb = ft_atoi(str);
	return (nb);
}
