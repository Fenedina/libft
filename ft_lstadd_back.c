/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:16:03 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/18 20:04:34 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (lst && new)
	{
		list = *lst;
		if (list == NULL)
			*lst = new;
		else
		{
			while (list->next)
			{
				list = list->next;
			}
			list->next = new;
		}
	}
}
