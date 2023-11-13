/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:05:47 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/13 20:03:16 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *to_find, size_t n)
{ 
    int i;
    int j;
    
    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return ((char *)str);
    while (str[i] && n > 0)
    {
        while (str[i + j] && to_find[j] == str[i + j])
            j++;
        if (to_find[j] == '\0')
            return ((char *)str + i);
        i++;                                                                                        
        j = 0;
        n--;
    }
    return (NULL);
}