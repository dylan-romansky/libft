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
#include "libft.h"

static void		ft_listchange(t_list *nuts)
{
	ft_memset(nuts->content, 'z', nuts->content_size);
}

static t_list	*ft_fuckmyass(t_list *bolts)
{
	bolts = ft_lstnew((void const *)"fuck my ass!", (ft_strlen("fuck my ass!") + 1));
	return (bolts);
}

void			ft_testlst(void)
{
	t_list *test;
	char	*str = "fuck my ass";
	char	*str2 = "fuck my fucking ass";

//lstnew
	printf("lstnew: 'fuck my ass', strlen('fuck my ass')\n result: ");
	test = ft_lstnew((void const *)str, (ft_strlen(str) + 1));
	printf("%s\nadding string: ", (char *)test->content);
	test->next = ft_lstnew((void const *)str2, (ft_strlen(str2) + 1));
	printf("\n string 1: %s\n string 2: %s\n\n", (char *)test->content, (char *)test->next->content);
//lstdelone
	t_list **charmander;
	t_list *lst2;

	lst2 = test->next;
	charmander = &lst2;
	printf("lstdelone: removing string 2:\n");
	ft_lstdelone(charmander, bzero);
	if (!lst2)
		printf("success!\n\n");
	else
		printf("failure...\n\n");
//lstdel
	charmander = &test;
	ft_lstdelone(charmander, bzero);
	test = ft_lstnew((void const *)"five whole fucking dicks!", (ft_strlen("five whole fucking dicks!") + 1));
	test->next = ft_lstnew((void const *)"let's try for six!", (ft_strlen("let's try for six!") + 1));
	test->next->next = ft_lstnew((void const *)"seven!", (ft_strlen("seven!") + 1));
	printf("lstdel: creating list:\n\t%s\n\t%s\n\t%s\ndeleting...", (char *)test->content, (char *)test->next->content, (char *)test->next->next->content);
	charmander = &test;
	ft_lstdel(charmander, ft_bzero);
	if(!test)
		printf("success!\n\n");
	else
		printf("failure...\n\n");
//lstadd
	test = ft_lstnew((void const *)"in the butt", (ft_strlen("in the butt") + 1));
	lst2 = ft_lstnew((void const *)"I said what what", (ft_strlen("I said what what") + 1));
	printf("lstadd: creating string '%s'\n adding string 'I said what what'\n result:\n", (char *)test->content);
	charmander = &test;
	ft_lstadd(charmander, lst2);
	printf("\t%s\n\t%s\n\n", (char *)test->content, (char *)test->next->content);
//lstiter
	printf("lstiter: changing above list to 'z's\n results:\n");
	ft_lstiter(*charmander, ft_listchange);
	printf("\t%s\n\t%s\n\n", (char *)test->content, (char *)test->next->content);
//lstmap
	printf("lstmap: changing above lists to 'fuck my ass'\n results:\n");
	test = ft_lstmap(*charmander, ft_fuckmyass);
	printf("\t%s\n\t%s\n\n", (char *)test->content, (char *)test->next->content);
	printf("Congratulations! You've reached the end of the tests!\n");
}
