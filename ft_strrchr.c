/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:10:02 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/13 16:45:19 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    int i;
    char *res;
    
    i = ft_strlen(str) - 1;
    res = (char*)str;
    res = res + i;
    while (res)
    {
        if (*res == c)
            return (res);
        i--;
        res--;   
    }
    return res;
}