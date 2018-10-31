/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 16:59:07 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/30 17:04:10 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void(*f)(t_list *elem))
{
	if(lst && lst->next)
		ft_lstiter(lst->next, f);
	f(lst);
}
