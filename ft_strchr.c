/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:01:07 by daelee            #+#    #+#             */
/*   Updated: 2020/02/28 22:21:35 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char find;

    find = c;
    while (*s++ != '\0')
    {
        if (*s == find)
            return ((char *)s);
    }
    return (0);
}

int     main(void)
{
    char str1[16] = "abcdefghiGlmnop";
    char str2[16] = "abcdefghiGlmnop";
    printf("real...%s\n", strchr(str1, 'd'));
    printf("myft...%s\n", ft_strchr(str2, 'd'));
    return (0);
}