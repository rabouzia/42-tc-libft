/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:59:17 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/10 17:04:47 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    int i;
    char *s1;
    char *s2;

    s1 = (char *) str1;
    s2 = (char *) str2;    
    i = 0;
    while(s1[i] == s2[i] && n > 0)
        i++;
    return(s1[i] - s2[i]);
}