/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:36:53 by daelee            #+#    #+#             */
/*   Updated: 2020/02/29 11:04:41 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *b, int c, size_t n)
{
    unsigned char *new_b;
    unsigned char find;

    new_b = (unsigned char *)b;
    find = c;
    while (n--)
    {
        if (*new_b++ == find)
            return ((new_b - 1));
    }
    return (0);
}

int     main(void)
{
    char str1[16] = "abcdefghiGlmnop";
    char str2[16] = "abcdefghiGlmnop";
    printf("real...%s\n", memchr(str1, 0, 0));
    printf("myft...%s\n", ft_memchr(str2, 0, 0));
    return (0);
}