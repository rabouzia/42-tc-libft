/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:28:58 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 14:28:59 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *start;
    
    if(b == NULL)
        return (NULL);
    start = b;
    while (len)
    {
        *start = c;
        start++;
        len--;
    }
    return (b);
}