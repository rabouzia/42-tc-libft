/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:30:29 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/10 18:07:51 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int			ft_isalpha(int c);

static int	ft_islower(int c);

static int	ft_isupper(int c)

char *ft_strchr(const char *str, int c);

char *ft_strrchr(const char *str, int c);

char *ft_substr(const char *s, unsigned int start, size_t len);

int ft_atoi(char *str);

void ft_bzero(void *s, size_t n);

void *ft_calloc(size_t count, size_t size);

int ft_isalnum(char c);

int ft_isascii (int c);

int ft_isdigit (char c);

int ft_isprint(unsigned char c);

void *ft_memchr(const void *str, int c, size_t n);

void *ft_memcpy(void *d, const void * s, size_t len);

int ft_memcmp(const void *str1, const void *str2, size_t n);

void *ft_memmove(void *d, const void *s, size_t len);

void *ft_memset(void *b, int c, size_t len);

void    ft_putchar(char c);

void    ft_putnbr(int nb);

void    ft_putstr(char *str);

char    *ft_strcat(char *dest, const char *src);

char    *ft_strchr(const char *str, int c);

int     ft_strcmp(char *s1, char *s2);

char    *ft_strcpy(char *dest, const char *src);

char    *ft_strdup(const char *src);

char    *ft_strjoin(char const *s1, char const *s2);

int             ft_strlen(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t len);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}                       t_list;

void    ft_tolower(char c);

void    ft_toupper(char c);

#endif