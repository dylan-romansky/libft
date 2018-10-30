/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:09:15 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/29 16:37:57 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*n;
	int		i;

	i = 0;
	if (s == NULL || *s == '\0')
		return (NULL);
	n = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (*s)
		n[i++] = f(*(s++));
	n[i] = '\0';
	return (n);
}
