/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 23:05:09 by daelee            #+#    #+#             */
/*   Updated: 2020/02/29 00:50:20 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t      my_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int     my_memcmp(const void *b1, const void *b2, size_t n)
{
    unsigned char *s1;
    unsigned char *s2;
    size_t i;

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

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t l_len;

    l_len = my_strlen(little);
    while (len--)
    {
        if (my_memcmp(big, little, l_len) == 0)
            return ((char *)big);
        big++;
    }
    return (0);
}

int main()
{
	char s1[] = "abcde";
	char *ptr;

    ptr = ft_strnstr(s1, "cde", 10);
	printf("%s\n", ptr);
	return 0;
}
