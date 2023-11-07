/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:59:17 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/07 17:05:10 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int memcmp(const void *str1, const void *str2, size_t n)
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
 #include <stdio.h>
#include <string.h>

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}