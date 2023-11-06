/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:10:02 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 15:59:32 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_sttrlen(const char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

char *ft_strrchr(const char *str, int c)
{
    int i;
    char *res;
    
    i = ft_sttrlen(str) - 1;
    res = (char*)str;
    res = res + i;
    while (res)
    {
        if(*res == c)
            return (res);
        i--;
        res--;   
    }
    return res;
}

#include <stdio.h>
#include <string.h>

int main () 
{
   const char str[] = "https://www.tutorialspoint.cjjjj.om";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}