/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:20:43 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/31 16:10:52 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s;
	char		*d;
	size_t		i;

	s = (char *)dst;
	d = (char *)src;
	i = -1;
	while (++i < n)
		s[i] = d[i];
	return (dst);
}
