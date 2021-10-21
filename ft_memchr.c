/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:06:44 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/14 20:12:49 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*src_new;
	unsigned char	*A;
	size_t			count;
	unsigned char	ch_new;

	i = 0;
	src_new = 0;
	count = 0;
	ch_new = (unsigned char)c;
	A = (unsigned char *) s;
	while (count < n)
	{
		if (A[i] == ch_new)
		{
			src_new = &A[i];
			return (src_new);
		}
		count++;
		i++;
	}
	return (0);
}
