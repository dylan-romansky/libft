/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:50:12 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/26 15:26:41 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*sr;
	char			*ds;
	size_t			i;

	sr = (char *)src;
	ds = dst;
	i = 0;
	while (n-- > 1)
	{
		*(ds++) = sr[i++];
		if (sr[i] == c)
		{
			*(ds++) = c;
			*ds = '\0';
			return ((void *)ds);
		}
	}
		return (NULL);
}
