/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:27:57 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/17 16:09:25 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str) + 1)
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
