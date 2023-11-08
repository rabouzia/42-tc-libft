/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:29:31 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/08 17:45:51 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *src)
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