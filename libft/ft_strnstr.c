/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 23:05:09 by daelee            #+#    #+#             */
/*   Updated: 2020/03/09 20:27:59 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  l_len;
    size_t  b_len;
    size_t  len2;

    if (*little == '\0')
        return ((char *)big);
    l_len = ft_strlen(little);
    b_len = ft_strlen(big);
    if (b_len < l_len || len < l_len)
		return (0);
	len2 = b_len > len ? len : b_len;
    while (len2--)
    {
        if (ft_memcmp(big, little, (l_len - 1)) == 0)
            return ((char *)big);
        big++;
    }
    return (0);
}
