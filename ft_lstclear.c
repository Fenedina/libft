/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 19:17:19 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/18 19:17:21 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;
	t_list	*lst_new;

	lst_new = *lst;
	while (lst_new)
	{
		list = lst_new->next;
		if (del)
			del(lst_new->content);
		free(lst_new);
		lst_new = list;
	}
	*lst = NULL;
}
