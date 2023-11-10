/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:36:30 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/10 18:01:21 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
void *ft_memmove(void *d, const void *s, size_t len)
{
    char    *res;

    if (!s || !d)
        return(NULL);
    if (!(res = (char *)malloc(sizeof(char *) * len)))
        return (NULL);
    res = (char *)ft_strlcpy(res, s, len);
    d = (void*)ft_strlcpy(d, res, len);    
    return(d);
}

*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}