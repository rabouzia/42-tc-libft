/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:22:58 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/13 15:59:00 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    unsigned char *res;
    size_t i;
    
    i = 0;
    res = (unsigned char *)str;
    if (!str || n == 0)
        return (NULL);
    while(i < n)
    {
        if (*res == (unsigned char)c)
            return (res);
        res++;
        i++;
    }
    return (NULL);
}