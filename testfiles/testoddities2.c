/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testoddities2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dromansk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 20:36:51 by dromansk          #+#    #+#             */
/*   Updated: 2018/10/31 17:08:28 by dromansk         ###   ########.fr       */
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
	int fd;

	fd = open("fd_output", O_RDWR);
	ft_putchar_fd('a', fd);
	ft_putchar_fd('\n', fd);
	ft_putstr_fd("fuck my ass\n", fd);
	ft_putendl_fd("fuck my ass", fd);
	ft_putnbr_fd(69420, fd);
	ft_putstr("To check the results of your fd functions,\nCheck the contents of the fd_output file\n\n");
}
