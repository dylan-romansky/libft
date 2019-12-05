/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 17:52:29 by dromansk          #+#    #+#             */
/*   Updated: 2019/12/05 00:44:35 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*n;
	int		i;

	if (s == NULL)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s) - 1;
	i = i < 0 ? 0 : i;
	while (i && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i--;
	n = ft_strndup(s, ++i);
	return (n);
}
