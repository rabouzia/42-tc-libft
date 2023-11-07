/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:22:58 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/07 17:01:39 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_sttrlen(const char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
        i++;
    return(i);
}


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

#include <stdio.h>
#include <string.h>

int main () 
{
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, ft_sttrlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
