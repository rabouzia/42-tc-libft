/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:07:34 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/24 16:02:02 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*elem;

	if (!lst)
		return (NULL);
	res = 0;
	while (lst)
	{
		elem = ft_lstnew(f(lst->content));
		if (elem == NULL)
		{
			ft_lstclear(&elem, del);
			return (NULL);
		}
		ft_lstadd_back(&res, elem);
		lst = lst->next;
	}
	return (res);
}
