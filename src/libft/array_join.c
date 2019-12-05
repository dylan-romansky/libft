/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_join.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 17:33:12 by dromansk          #+#    #+#             */
/*   Updated: 2019/12/04 17:32:42 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*array_join(void *old, size_t len1, void *add, size_t len2)
{
	char	*new;

	new = ft_strnew(len1 + len2);
	ft_memcpy(new, old, len1);
	ft_memcpy(new + len1, add, len2);
	free(old);
	free(add);
	return (new);
}
