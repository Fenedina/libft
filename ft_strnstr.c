/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:09:02 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/15 17:41:06 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strnstr(const char *str1, const char *str2, size_t c)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	i = 0;
	j = 0;
	new_str = (char *)str1;
	if (str2[i] == '\0')
		return (new_str);
	while (str1[i])
	{
		while (j < c && str2[j] == new_str[i + j])
		{
			if (ft_strlen(str2) + i > c)
				return (0);
			if (str2[j + 1] == '\0' || j == c)
				return (new_str + i);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
