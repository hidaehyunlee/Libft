/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:19:43 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 17:00:33 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *new_dest;
    const unsigned char *new_src;

    if (dest <= src)
    {
        new_dest = dest;
        new_src = src;
        while (n--)
            *new_dest++ = *new_src;
    }
    else
    {
        new_dest = dest + (n - 1);
        new_src = src + (n - 1);
        while (n--)
            *new_dest-- = *new_src--;
    }
    return (dest);
}