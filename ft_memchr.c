/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:22:58 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/10 18:01:59 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    char *res;
    
    res = (char *)str;
    while(*res != c && n > 0)
    {
        if(*res == '\0')
            return NULL;
        res++;
        n--;
    }
    return res;
}