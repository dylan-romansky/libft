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
	int		*r;
	int		i;

	printf("memalloc: creating string...");
	if ((r = (int *)ft_memalloc(5)))
	{
		printf(" success!\n contents: ");
		r[0] = 1;
		r[1] = 2;
		r[3] = 3;
		r[4] = 4;
		i = 0;
		while (i++ < 4)
			printf("%d ", r[i]);
	}
	else
		printf(" failure...\n");
	printf("memdel: deleting string... ");
	ft_memdel((void *)r);
	if (!r)
		printf("success!\n");
	else
		printf("failure...\n");
}
