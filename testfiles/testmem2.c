/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmem2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:11:50 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/25 18:05:33 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_testmem2(void)
{
	char	*r;
	char	**s;

//memalloc
	printf("memalloc: creating string...");
	r = (char *)ft_memalloc(5);
	printf(" success!\n writing to string...\n ");
	s = &r;
	ft_strcpy(*s, "fuck");
	printf("contents: %s\n\n", r);
//memdel
	printf("memdel: deleting string...\n");
	ft_memdel((void **)s);
	printf(" %s\n should be null\n\n", *s);
}
