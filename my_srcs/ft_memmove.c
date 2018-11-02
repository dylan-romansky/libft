/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:20:15 by dromansk          #+#    #+#             */
/*   Updated: 2018/11/01 16:21:20 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
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
}
