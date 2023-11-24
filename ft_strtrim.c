/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:41:37 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/24 15:41:39 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	debut;
	size_t	fin;

	if (!s1 || !set)
		return (NULL);
	debut = 0;
	while (s1[debut] && ft_charset(s1[debut], set))
		debut++;
	fin = ft_strlen(s1);
	while (fin > debut && ft_charset(s1[fin - 1], set))
		fin--;
	str = (char *)malloc(sizeof(*s1) * (fin - debut + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (debut < fin)
		str[i++] = s1[debut++];
	str[i] = 0;
	return (str);
}
