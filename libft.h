/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:19:20 by daelee            #+#    #+#             */
/*   Updated: 2020/03/05 02:14:56 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *dest, int c, size_t n);
void	ft_bzero(void *b, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *b, int c, size_t n);
int     ft_memcmp(const void *b1, const void *b2, size_t n);
size_t      ft_strlen(const char *s);
size_t      ft_strlcpy(char *dest, const char *src, size_t dstsize);
size_t      ft_strlcat(char *dest, const char *src, size_t dstsize);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char    *ft_strnstr(const char *big, const char *little, size_t len);
int     ft_atoi(const char *str);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int	    ft_isalnum(int c);
int	    ft_isascii(int c);
int	    ft_isprint(int c);
int	    ft_toupper(int c);
int	    ft_tolower(int c);
void    *ft_calloc(size_t nmemb, size_t size);
char    *ft_strdup(const char *str);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);

#endif