/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 16:20:15 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/31 16:01:08 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*t;

	if ((t = (char *)malloc(sizeof(char) * len)))
	{
		ft_memcpy(t, src, len);
		ft_memcpy(dst, t, len);
		free(t);
		return (dst);
	}
	return (NULL);
}
