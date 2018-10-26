/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:02:29 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/23 14:52:30 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char a;
	unsigned char *d;

	a = c;
	d = b;
	while (len--)
	{
		*d = a;
		d++;
	}
	*d = '\0';
	return (b);
}
