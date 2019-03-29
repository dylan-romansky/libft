/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:04:35 by dromansk          #+#    #+#             */
/*   Updated: 2019/03/28 19:30:21 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *n;

	n = f(lst);
	while (lst->next)
	{
		lst = lst->next;
		if (!(lst->next = f(lst->next)))
			return (NULL);
	}
	return (n);
}
