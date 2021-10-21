/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 11:22:44 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/19 19:52:01 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	min_max(int nb, int fd)
{
	if (nb == INT_MIN)
	{
		write(fd, "-2", 2);
		nb = 147483648;
	}
	if (nb == INT_MAX)
	{
		write(fd, "2", 1);
		nb = 147483647;
	}
	return (nb);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	b;

	nb = min_max(nb, fd);
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	if (nb < 10)
	{
		b = (char) nb + '0';
		write(fd, &b, 1);
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
