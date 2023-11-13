/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:28:08 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/13 20:05:14 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	p;
	int	n;
	char *str;	

	str = (char *)s;
	n = 0;
	p = 0;
	while ((*str >= 9 || *str <= 13) && *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			p++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	if (!(p % 2 == 0))
		return (-n);
	return (n);
}
