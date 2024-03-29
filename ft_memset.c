/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:46:41 by                   #+#    #+#             */
/*   Updated: 2021/10/13 20:41:24 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memset(void *dest, int c, size_t kol)
{
	size_t	i;
	char	*A;

	i = 0;
	A = (char *)dest;
	while (i < kol)
	{
		A[i] = c;
		i++;
	}
	return (dest);
}
