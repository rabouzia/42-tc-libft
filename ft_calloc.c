/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:28:21 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/16 14:59:37 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t n, size_t s)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s != 0)
	{
		if (n > INT_MAX / s)
			return (0);
	}
	str = (char *)malloc(n * s);
	if (str == 0)
		return (0);
	while (i < n * s)
	{
		str[i] = 0;
		i++;
	}
	return ((void *)str);
}
