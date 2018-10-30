/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 18:29:46 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/22 19:03:41 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	int		a;
	int		b;

	n = 0;
	a = 0;
	b = 0;
	while (dst[a])
	{
		a++;
		n++;
	}
	while (src[b] && dstsize > 1)
	{
		dst[a++] = src[b++];
		dstsize--;
		n++;
	}
	dst[a] = '\0';
	return (n);
}
