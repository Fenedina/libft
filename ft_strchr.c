/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:08:00 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/14 21:11:59 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strchr(const char *str, int ch)
{
	int				i;
	char			*str_new;
	int				len;

	i = 0;
	str_new = 0;
	len = ft_strlen(str);
	if (ch > 256)
		ch = ch - 256;
	while (str[i] != ch && i <= len && str[i] != '\0')
	{
		i++;
	}
	if (len < 0)
		return (0);
	if (str[i] == ch)
		str_new = (char *)&str[i];
	return (str_new);
}
