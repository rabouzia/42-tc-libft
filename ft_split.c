/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 12:42:30 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/24 15:44:12 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	word_len;
	int		i;

	if (!s)
		return (NULL);
	str = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!*s)
			continue ;
		if (!ft_strchr(s, c))
			word_len = ft_strlen(s);
		else
			word_len = ft_strchr(s, c) - s;
		str[i++] = ft_substr(s, 0, word_len);
		s += word_len;
	}
	str[i] = NULL;
	return (str);
}
