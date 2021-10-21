/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 21:49:04 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/16 21:49:06 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_trim(char s1, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*A;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[start] && ft_trim(s1[start], set))
		start++;
	while (end > start && ft_trim(s1[end - 1], set))
		end--;
	A = (char *)malloc(sizeof(char) * (end - start) + 1);
	if (0 == A)
		return (NULL);
	while (start < end)
		A[i++] = s1[start++];
	A[i] = '\0';
	return (A);
}
