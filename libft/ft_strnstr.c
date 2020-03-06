/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 23:05:09 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 17:05:22 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  l_len;

    if (*little == '\0')
        return ((char *)big);
    l_len = ft_strlen(little);
    while (len--)
    {
        if (ft_memcmp(big, little, (l_len - 1)) == 0)
            return ((char *)big);
        big++;
    }
    return (0);
}
