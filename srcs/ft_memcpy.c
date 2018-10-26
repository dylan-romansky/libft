/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:20:43 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 21:53:52 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*s;
	const char	*d;
	int			i;

	s = dst;
	d = src;
	i = 0;
	while (n-- > 1)
	{
		s[i] = d[i];
		i++;
	}
	s[i] = '\0';
	return (dst);
}
