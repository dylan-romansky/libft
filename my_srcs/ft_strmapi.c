/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:15:28 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/29 17:00:30 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	unsigned int	i;
	char			*n;

	if (s == NULL || *s == '\0')
		return (NULL);
	a = 0;
	i = ft_strlen(s);
	n = (char *)malloc(sizeof(char) * i);
	while (a < i)
	{
		n[a] = f(a, s[a]);
		a++;
	}
	return (n);
}
