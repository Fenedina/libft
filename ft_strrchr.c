/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:33:05 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/20 15:02:22 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*str_new;

	i = ft_strlen(str);
	str_new = 0;
	if (i < 0)
		return (NULL);
	if (ch > 256)
		ch = ch - 256;
	while (str[i] != ch && i > 0)
		i--;
	if (str[i] == ch)
		str_new = (char *) &str[i];
	return (str_new);
}
