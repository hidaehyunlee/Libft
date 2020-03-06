/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:36:53 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 16:58:35 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memchr(const void *b, int c, size_t n)
{
    unsigned char   *new_b;
    unsigned char   find;

    new_b = (unsigned char *)b;
    find = c;
    while (n--)
    {
        if (*new_b++ == find)
            return ((new_b - 1));
    }
    return (0);
}