/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:07:48 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/22 14:41:34 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void ft_lstadd_back(t_list **lst, t_list *new)
{
    if (!lst)
			return ;
	while (lst->next != NULL)
        lst = lst->next; 
    
}