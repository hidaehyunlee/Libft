/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 13:36:53 by daelee            #+#    #+#             */
/*   Updated: 2020/03/10 00:06:26 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memchr(const void *b, int c, size_t n)
{
    size_t          i;
    unsigned char   *new_b;
    unsigned char   find;

    new_b = (unsigned char *)b;
    find = c;
    i = 0;
    while (i < n)
    {
        if (new_b[i] == find)
            return ((new_b + i));
        i++;
    }
    return (0);
}