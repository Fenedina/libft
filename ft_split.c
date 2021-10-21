/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:05:15 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/20 17:49:23 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **A)
{
	unsigned int	i;

	i = 0;
	while (A[i])
	{
		free(A[i]);
		i++;
	}
	free(A);
	return (NULL);
}

static unsigned int	ft_pointer(char const *s, char c)
{
	unsigned int	i;
	unsigned int	point;
	int				flag;

	i = 0;
	point = 0;
	if (!s[i])
		return (0);
	flag = 1;
	while (s[i] != 0)
	{
		while (s[i] && s[i] == c)
		{
			flag = 1;
			i++;
		}
		while (s[i] && s[i] != c)
		{
			if (flag)
				point++;
			flag = 0;
			i++;
		}
	}
	return (point);
}

static unsigned int	ft_word(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	if (!s[i])
		return (0);
	if (s[i])
	{
		while (s[i] && s[i] != c)
		{
			count++;
			i++;
		}
	}
	return (count);
}

static char	**ft_malloc(unsigned int	point)
{
	char	**A;

	A = (char **)malloc(sizeof(char *) * (point + 1));
	if (0 == A)
	{
		free(A);
		return (0);
	}
	return (A);
}

char	**ft_split(char const *s, char c)
{
	char			**A;
	unsigned int	point;
	unsigned int	i;
	unsigned int	count;

	i = 0;
	if (!s)
		return (NULL);
	A = ft_malloc(point = ft_pointer(s, c));
	while (A && i < point)
	{
		while (*s == c)
			s++;
		count = ft_word(s, c);
		A[i] = (char *)malloc(sizeof(char) * (count + 1));
		if (0 == A[i])
			return (ft_free(A));
		ft_strlcpy(A[i], s, count + 1);
		s = s + count + 1;
		i++;
	}
	if (A)
		A[i] = 0;
	return (A);
}
