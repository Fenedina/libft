/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:39:41 by                   #+#    #+#             */
/*   Updated: 2021/10/14 20:12:49 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (0);
	len += 1;
	if (dst < src)
	{
		d = (unsigned char *)dst;
		s = (unsigned char *)src;
		while (--len > 0)
		{
			*d++ = *s++;
		}
	}
	if (dst >= src)
	{
		d = (unsigned char *)dst + len - 1;
		s = (unsigned char *)src + len - 1;
		while (--len > 0)
		{
			*--d = *--s;
		}
	}
	return (dst);
}
