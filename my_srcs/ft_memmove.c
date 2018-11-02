/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:20:15 by dromansk          #+#    #+#             */
/*   Updated: 2018/11/02 13:47:32 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char *t;

	if (!(t = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	ft_memcpy(t, src, len);
	ft_memcpy(dst, t, len);
	free(t);
	if (ft_strncmp(dst, src, len) == 0)
		return (dst);
	return (NULL);
}*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*srcc;
	char	*dstc;
	size_t	i;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dst;
	if (srcc < dstc)
		while ((int)(--len) >= 0)
			*(dstc + len) = *(srcc + len);
	else
		while (++i < len)
			*(dstc + i) = *(srcc + i);
	return (dst);
}
