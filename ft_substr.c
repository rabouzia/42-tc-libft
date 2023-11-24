/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:41:55 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/24 15:39:35 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*empty(void)
{
	char	*err;

	err = malloc(1);
	if (!err)
		return (NULL);
	err[0] = 0;
	return (err);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	n;
	char	*res;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	if (start > (unsigned int)n)
		return (empty());
	if (len > n - start)
		len = n - start;
	res = (char *)malloc((len + 1) * sizeof(*s));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
