/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:19:20 by daelee            #+#    #+#             */
/*   Updated: 2020/02/29 00:47:30 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <strings.h>
#include <stdio.h>

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


#endif