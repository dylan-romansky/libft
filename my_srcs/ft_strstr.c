/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:32:57 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/31 19:53:07 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int a;
	int b;

	a = 0;
	if (*haystack == '\0' && *needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		b = 0;
		while (needle[b] && haystack[a + b] == needle[b])
			b++;
		if (!needle[b])
			return ((char *)haystack + a);
		a++;
	}
	return (NULL);
}
