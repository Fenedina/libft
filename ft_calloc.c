/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:05:40 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/20 14:09:04 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	char	*A;
	size_t	sum;
	size_t	i;

	i = 0;
	sum = count * size;
	A = malloc(sum);
	if (0 == A)
		return (NULL);
	while (i < sum)
	{
		A[i] = '\0';
		i++;
	}
	return (A);
}
