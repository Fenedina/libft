/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:07:19 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/15 15:11:15 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *src, const void *dest, size_t c)
{
	int				i;
	int				j;
	size_t			count;
	unsigned char	*A;
	unsigned char	*B;

	i = 0;
	j = 0;
	count = 0;
	A = (unsigned char *) src;
	B = (unsigned char *) dest;
	while (count < c)
	{
		if (A[i] < B[j])
			return (A[i] - B[j]);
		if (A[i] > B[j])
			return (A[i] - B[j]);
		if (A[i] == B[j])
		{
			i++;
			j++;
			count++;
		}
	}
	return (0);
}
