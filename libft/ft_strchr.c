/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:01:07 by daelee            #+#    #+#             */
/*   Updated: 2020/03/05 02:18:14 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char find;
    int i;

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

int     main(void)
{
    char str1[16] = "AB";
    char str2[16] = "AB";
    printf("real...%s\n", strchr(str1, '\0'));
    printf("myft...%s\n", ft_strchr(str2, '\0'));
    return (0);
}