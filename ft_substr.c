/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:41:55 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/07 20:58:13 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int n;
    char *res;

    n = ft_strlen(s);
    if (start > n)
        return (NULL);
    if (n > start - len)
        n = start - len;
    
    res = (char *) malloc(n);

    if (!res)
        return NULL;
    res = ft_strlcpy()
    return res;
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