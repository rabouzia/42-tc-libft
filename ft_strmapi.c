/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:20:32 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/17 15:47:48 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f) (unsigned int, char *))
{
    char *str;

    str = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!str)
        return (NULL);
        
}