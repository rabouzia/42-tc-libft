/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:28:53 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/24 16:01:19 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t len)
{
	size_t	i;
	char	*dest;

	if (!d && !s)
		return (NULL);
	dest = (char *)d;
	i = 0;
	while (i < len)
	{
		*(char *)dest = *(char *)s;
		i++;
		dest++;
		s++;
	}
	return (d);
}
