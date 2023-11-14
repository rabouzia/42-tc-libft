/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:11:47 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/14 17:50:03 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	char	*str;
	char	*t;
	char	*u;

	if (!(str = (char *)malloc(16)))
		return (NULL);
	t = str;
	(nbr < 0 ? *t++ = "-" : 1);
	if (nbr <= -10)
	{
		u = ft_itoa(-(nbr / 10));
		while (*u)
			*t++ = *u++;
	}
	*t = '0' - nbr % 10;
	*(t + 1) = '\0';
	return (str);
}
