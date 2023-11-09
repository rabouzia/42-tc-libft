/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:05:24 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/09 15:13:14 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    int len;

    len = ft_strlen(s1) + ft_strlen(s2) + 2;

    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return (ft_strdup(s2));
    if (!s2)
        return (ft_strdup(s1));
    if (!(res = (char *)malloc((len)*sizeof(char))))
        return (NULL);
    ft_strcat(ft_strcpy(res, s1), s2);
    return (res);
}
    #include <stdio.h>

    int main (){
    printf("\n\n--------STRJOIN------------");
     printf("\n ft_strjoin : 'Hello World ', 'Salut ca va'\n");
     char string[50] = "Hello World ";
	char concat[50] = "Salut ca va";
	 printf("%s\n", ft_strjoin(string, concat));
    
     printf("\n ft_strjoin : 'Hello', ' World, ca va?'\n");
	char string2[50] = "Hello";
	 char concat2[50] = " World, ca va?";
	 printf("%s\n", ft_strjoin(string2, concat2));}