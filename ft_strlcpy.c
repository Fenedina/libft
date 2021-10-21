/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 17:33:40 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/12 20:01:50 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
size_t	ft_strlcpy(char *dest, const char *str, size_t c)
{
	size_t	i;

	i = 0;
	while (i + 1 < c && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	if (c)
		dest[i] = '\0';
	while (str[i])
	{
		i++;
	}
	return (i);
}
