/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:44:40 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/30 16:54:02 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void(*del)(void*, size_t))
{
	if (*alst->next)
		ft_lstdel(alst->next, del);
	ft_lstdelone(alst, del);
}
