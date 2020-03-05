/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:33:22 by daelee            #+#    #+#             */
/*   Updated: 2020/02/28 23:04:53 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    const char *last;
    char find;

    last = NULL;
    find = (char)c;
    while (*s++ != '\0')
    {
        if (*s == find)
            last = s;
    }
    return ((char *)last);
}

int     main(void)
{
    char str1[16] = "abcGefGhilmnop";
    char str2[16] = "abcGefGhilmnop";
    printf("real...%s\n", strrchr(str1, 'z'));
    printf("myft...%s\n", ft_strrchr(str2, 'z'));
    return (0);
}
