/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:32:57 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/23 15:22:56 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int a;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			a = ft_strncmp(haystack, needle, (ft_strlen(needle) - 1));
			if (a == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
