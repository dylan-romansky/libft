/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testoddities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:36:51 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/29 21:00:59 by dromansk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_testoddities2(void)
{
//putchar
	write (1, "testing putchar: ", 17);
	ft_putchar('a');
	write(1, ", ", 2);
	ft_putchar(48);
	ft_putchar('\n');
	ft_putchar('\n');
//putstr
	write(1, "testing putstr: ", 16);
	ft_putstr("fuck my ass\n\n");
//putendl
	write(1, "testing putendl: ", 17);
	ft_putendl("fuck my ass\n");
//putnbr
	write(1, "testing putnbr: ", 16);
	ft_putnbr(69420);
	write(1, ", ", 2);
	ft_putnbr(-0);
	write(1, ", ", 2);
	ft_putnbr(-69420);
	write(1, "\n\n", 2);
//fd
	write(1, "giving fd 1 cuz if it writes with a variable given there, \nidk why it wouldn't write elsewhere:\n", 96);
	write(1, "putchar_fd: ", 12);
	ft_putchar_fd('a', 1);
	write(1, "\nputstr_fd: ", 12);
	ft_putstr_fd("fuck my ass", 1);
	write(1, "\nputendl_fd: ", 13);
	ft_putendl_fd("fuck my ass", 1);
	write(1, "putnbr_fd: ", 12);
	ft_putnbr_fd(69420, 1);
	write(1, "\n", 1);
}
