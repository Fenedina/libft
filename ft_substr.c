/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:50:34 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/19 18:27:49 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*A;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	A = (char *)malloc(sizeof(char) * (len + 1));
	if (0 == A)
		return (NULL);
	while (s[start] && i < len)
	{
		if (start <= ft_strlen(s))
			A[i] = s[start++];
		if (start > ft_strlen(s))
			return (0);
		i++;
	}
	A[i] = '\0';
	return (A);
}
