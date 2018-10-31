/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:20:15 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/23 14:47:30 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	int			i;
	const char	*s;
	char		*t;

	i = 0;
	s = src;
	t = dst;
	while (len--)
		t[i++] = *(s++);
	t[i] = '\0';
	dst = t;
	return (dst);
}
