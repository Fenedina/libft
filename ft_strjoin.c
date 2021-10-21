/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:01:56 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/17 17:01:59 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*A;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	A = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (0 == A)
		return (NULL);
	while (s1[i] != '\0')
	{
		A[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		A[i++] = s2[j++];
	}
	A[i] = '\0';
	return (A);
}
