/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fenedina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 21:14:31 by fenedina          #+#    #+#             */
/*   Updated: 2021/10/19 21:14:33 by fenedina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_null(t_list *new_el, t_list *lst, void (*del)(void *))
{
	int	flag;

	flag = 1;
	if (0 == new_el)
	{
		ft_lstclear(&lst, del);
		flag = 0;
	}
	return (flag);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new_el;

	if (!lst || !f)
		return (NULL);
	new_el = ft_lstnew(f(lst->content));
	ft_null(new_el, lst, del);
	list = new_el;
	lst = lst->next;
	while (lst)
	{
		new_el = ft_lstnew(f(lst->content));
		if (0 == new_el)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&list, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&list, new_el);
	}
	return (list);
}
