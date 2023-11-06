/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:30:29 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/06 15:59:59 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char *ft_strchr(const char *str, int c);

char *ft_strrchr(const char *str, int c);

int ft_atoi(char *str);

void bzero(void *s, size_t n);

void *ft_calloc(size_t count, size_t size);

int ft_isalnum(char c);

int ft_isascii (char c);

int ft_isdigit (char c);

int ft_isprint(unsigned char c);

void *ft_memchr(const void *memb, int searchchr, size_t size);

void *memcpy(void *d, const void * s, size_t size);

void *ft_memmove(void *d, const void *s, size_t size);

void *ft_memset(void *b, int c, size_t len);

void    ft_putchar(char c);

void    ft_putnbr(int nb);

void    ft_putstr(char *str);

char    *ft_strcat(char *dest, char *src);

char    *strchr(const char *str, int c);

int     ft_strcmp(char *s1, char *s2);

char    *ft_strcpy(char *dest, char *src);

char    *ft_strdup(char *src);

int     ft_strlen(char *str);

void    ft_tolower(char c);

void    ft_toupper(char c);

#endif