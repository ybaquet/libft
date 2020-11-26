/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yde-mont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:38:54 by yde-mont          #+#    #+#             */
/*   Updated: 2020/11/24 14:39:36 by yde-mont         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, int len);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int c);
int		ft_isdigit(int i);
int		ft_isprint(int i);
char	*ft_itoa(int n);
void	*ft_memccpy (void *dest, const void *src, int i, size_t n);
void	*ft_memchr (const void *src, int i, size_t n);
int		ft_memcmp (void *s1, void *s2, size_t n);
void	*ft_memcpy (void *dest, const void *src, size_t n);
void	*ft_memmove (void *dest, void *src, size_t n);
void	*ft_memset (void *b, int i, size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_raise_segfault();
char	**ft_split(char const *s1, char c);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strrchr(const char *s, int c);
size_t	ft_strlen(const char *str);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t end);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
