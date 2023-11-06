/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:36:30 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 16:12:49 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *d, const void *s, size_t size)
{
    char    *result;
    
    if (s == NULL || d == NULL)
        return (NULL);
    if (!(result = (char*) malloc(sizeof(char *)* size)))
        return (NULL);
    result = ft_strncpy(result, s, size);
    d = (d, result, size);
    free(result);
    return(result);
}