/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:19:20 by daelee            #+#    #+#             */
/*   Updated: 2020/02/27 16:20:04 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <strings.h>
#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t len);
void	ft_bzero(void *b, size_t len);
void    *ft_memcpy(void *dest, const void *src, size_t n)
//void	*ft_memccpy(void *dest, const void *src, int c, size_t len);
// void	*ft_memmove(void *dst, const void *src, unsigned int len);
// void	*ft_memchr(const void *s, int c, unsigned int n);
// int	    memcmp(const void *s1, const void *s2, size_t n);

#endif