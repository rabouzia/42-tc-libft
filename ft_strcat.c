/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:29:16 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 14:29:17 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;
    i = 0;
    j = 0;
    while(dest[i])
        i++;
    while(src[j])
    {
        dest[i] = src[j];
        j++;
    }
    dest[i] = '\0';
    return dest;
}