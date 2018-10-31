/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlst.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 17:26:01 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/30 17:33:14 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_testlst(void)
{
	t_list *test;
//lstnew
	printf("lstnew: 'fuck my ass', strlen('fuck my ass')\n result: ");
	test = ft_lstnew((void const)"fuck my ass", ft_strlen("fuck my ass"));
	printf("%s\n\n", (char *)test->content);
}
