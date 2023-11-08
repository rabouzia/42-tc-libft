/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:41:55 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/08 16:35:44 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *empty(void)
{
    char *err;

    err = malloc(1);
    if(!err)
        return (NULL);
    err[0] = 0;
    return (err);
}

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t n;
    char *res;

    n = ft_strlen(s);
    if(!s)
        return (NULL);
    if (start > (unsigned int)n)
        return (empty());
    if (len > n - start)
        len = n - start;
    res = (char *) malloc((len + 1) *sizeof(*s));
    if (!res)
        return NULL;
    ft_strlcpy(res, s + start, len + 1);
    return (res);
}
#include <stdio.h>
#include <string.h>
int  main ()
{
    printf("\nTest de ft_substr :\n");
	printf("njo : %s\n", ft_substr("bonjour", 2, 3));
	printf("njour : %s\n", ft_substr("bonjour", 2, 5));
	printf("njour : %s\n", ft_substr("bonjour", 2, 6));
	printf("r : %s\n", ft_substr("bonjour", 6, 1));
	printf("'' : %s\n",	ft_substr("bonjour", 6, 0));
	char stest[100] = "test";
	memset(stest + 6, 'a', 50); 
	printf("'' : %s\n",	ft_substr(stest, 10, 1));  
}