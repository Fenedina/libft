/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:08:26 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/15 20:10:51 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = ft_strlen(dest);
	count = j;
	if (c <= count)
		return (c + ft_strlen(src));
	while (src[i] && i + count < c - 1)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (ft_strlen(src) + count);
}
