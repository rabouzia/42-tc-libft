/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:29:27 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/09 14:52:43 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strcpy(char *dest, const char *src)
{
    int i;
    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return dest;
}