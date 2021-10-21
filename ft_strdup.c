/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <fenedina@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:39:10 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/13 18:18:52 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*A;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (src[i] != '\0')
	{
		c++;
		i++;
	}
	A = malloc(sizeof(char) * c + 1);
	if (0 == A)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		A[i] = src[i];
		i++;
	}
	A[i] = 0;
	return (A);
}
