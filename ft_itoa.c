/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:48:36 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/19 20:13:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbsave(int nbsave)
{
	int	i;

	i = 0;
	while (nbsave != 0)
	{
		nbsave /= 10;
		i++;
	}
	return (i);
}

static char	*ft_str(char *str, int nb, int i)
{
	while (nb != '\0')
	{
		if (nb % 10 < 0)
			str[i] = -1 * (nb % 10) + '0';
		else
			str[i] = (nb % 10) + '0';
		nb = nb / 10;
		--i;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		i;
	int		nbsave;

	nbsave = nb;
	i = ft_nbsave(nbsave);
	str = malloc(sizeof(char) * i + 2);
	 if (0 == str)
		 return (0);
	 if (nb == 0)
	{
		 str[0] = '0';
		 str[1] = '\0';
		 return (str);
	}
	 if (nb < 0)
	{
		 str[0] = '-';
		 i++;
	}
	 str[i] = '\0';
	 i--;
	 str = ft_str(str, nb, i);
	 return (str);
}
