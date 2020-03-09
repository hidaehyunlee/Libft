/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:33:22 by daelee            #+#    #+#             */
/*   Updated: 2020/03/09 19:50:47 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char            *ft_strrchr(const char *s, int c)
{
    const char  *last;
    char        find;

    last = NULL;
    find = (char)c;
    while (*s++ != '\0')
    {
        if (*s == find)
            last = s;
    }
    return ((char *)last);
}