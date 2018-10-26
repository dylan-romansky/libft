/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:15:28 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 16:46:15 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*n;

	if (s == NULL || *s == '\0')
		return (NULL);
	a = 0;
	n = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (*s)
	{
		n[a] = f(a, s[a]);
		a++;
	}
	n[a] = '\0';
	return (n);
}
