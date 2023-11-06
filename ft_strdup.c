/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:29:31 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 14:29:32 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return i;
}

char    *ft_strdup(char *src)
{
    int i;
    char *r;

    r = (int *) malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!r)
        return NULL;

    while(src[i])
    {
        r[i] = src[i];
        i++;
    }
    r[i] = 0;
    return r;
}