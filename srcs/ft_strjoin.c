/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:42:07 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/24 16:06:06 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;

	if ((n = (char *)malloc(sizeof(char)
					* (ft_strlen(s1) + ft_strlen(s2) - 1))))
	{
		while (*s1)
			*(n++) = *(s1++);
		while (*s2)
			*(n++) = *(s2++);
		*n = '\0';
		return (n);
	}
	return (NULL);
}
