/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   X ft_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:18:22 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 16:11:33 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

void *memchr(const void *str, int c, size_t n)
{
    
}


#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}