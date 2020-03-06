/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 17:45:56 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 16:59:02 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int                 ft_memcmp(const void *b1, const void *b2, size_t n)
{
    unsigned char   *s1;
    unsigned char   *s2;
    size_t i;

    if (n == 0)
        return (0);
    s1 = (unsigned char *)b1;
    s2 = (unsigned char *)b2;
    i = 0;
    while (n--)
    {
        if (s1[i] != s2[i])
            break ; 
        i++;
    }
    return (s1[i] - s2[i]);
}