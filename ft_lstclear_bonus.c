/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:00:04 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/23 14:43:45 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*contener;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	contener = *lst;
	while (contener != NULL)
	{
		(del)(contener->content);
		tmp = contener->next;
		free(contener);
		contener = tmp;
	}
	*lst = NULL;
}
