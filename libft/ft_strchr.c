/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:01:07 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 17:02:30 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strchr(const char *s, int c)
{
    char    find;
    int     i;

    find = c;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == find)
            return ((char *)s + i);
        i++;
    }
    if (s[i] == find)
        return ((char *)s + i);
    return (0);
}