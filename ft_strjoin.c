/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:05:24 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/13 21:38:51 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *res;
    size_t len;

    len = ft_strlen(s1) + ft_strlen(s2) + 2;

    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return (ft_strdup(s2));
    if (!s2)
        return (ft_strdup(s1));
    if (!(res = (char *)malloc((len)*sizeof(char))))
        return (NULL);
    ft_strlcpy(res, s1, len);
    ft_strlcat(res, s2, len);
    return (res);
}