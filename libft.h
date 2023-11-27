/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabouzia <rabouzia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:30:29 by rabouzia          #+#    #+#             */
/*   Updated: 2023/11/24 16:00:31 by rabouzia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void				*ft_memset(void *b, int c, size_t len);

void				ft_bzero(void *s, size_t n);

void				*ft_memcpy(void *d, const void *s, size_t len);

void				*ft_memmove(void *d, const void *s, size_t len);

void				*ft_memchr(const void *str, int c, size_t n);

int					ft_memcmp(const void *str1, const void *str2, size_t n);

size_t				ft_strlen(const char *str);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_toupper(int c);

int					ft_tolower(int c);

char				*ft_strchr(const char *str, int c);

char				*ft_strchr(const char *str, int c);

char				*ft_strrchr(const char *str, int c);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

size_t				ft_strlcpy(char *dest, const char *src, size_t len);

int					ft_strcmp(char *s1, char *s2);

char				*ft_strcpy(char *dest, const char *src);

size_t				ft_strlcat(char *dest, const char *src, size_t size);

char				*ft_strnstr(const char *str, const char *to_find, size_t n);

int					ft_atoi(const char *s);

void				*ft_calloc(size_t count, size_t size);

char				*ft_substr(const char *s, unsigned int start, size_t len);

char				*ft_strdup(const char *src);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);

char				*ft_itoa(int n);

char				**ft_split(char const *s, char c);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

void				ft_putendl_fd(char *s, int fd);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				ft_lstadd_front(t_list **lst, t_list *new);

t_list				*ft_lstnew(void *content);

t_list				*ft_lstlast(t_list *lst);

int					ft_lstsize(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void *));

void				ft_lstclear(t_list **lst, void (*del)(void *));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

#endif
