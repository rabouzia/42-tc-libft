/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:28:53 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 14:28:54 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *memcpy(void *d, const void * s, size_t size)
{
    unsigned int i;
    char                *dest;
    const char           *src;

    if (s == NULL || d == NULL)
        return (NULL);
    dest = d;
    src = s;
    i = 0;
    while (i < size)
    {
        dest[i] = src[i];
        i++;
    }
    return (d);
}