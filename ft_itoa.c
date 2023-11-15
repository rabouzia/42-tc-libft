/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 11:11:47 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/15 17:25:15 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_intlen(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char *str;
	int i;
    int intlen;
    
    intlen = ft_intlen(n) + 1;
	str = (char *)malloc(sizeof(char) * intlen);
	if (!str)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	i = 1;
	if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else
	{
		str[i] = n;
		i++;
	}
	return (str);
}
*/


char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

static int	count_size(int n)
{
	int i;

	i = 0;
	if (n < 0)
		n *= -1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int num)
{
	char		*dst;
	int			count;
	int			i;
	long int	n;

	n = num;
	count = count_size(n);
	i = 0;
	if (n < 0 || count == 0)
		count++;
	if (!(dst = ft_strnew(count)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		dst[0] = '-';
		i++;
	}
	while (count > i)
	{
		count--;
		dst[count] = (n % 10) + '0';
		n /= 10;
	}
	return (dst);
}