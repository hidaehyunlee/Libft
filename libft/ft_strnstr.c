/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 23:05:09 by daelee            #+#    #+#             */
/*   Updated: 2020/03/01 13:52:26 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t      ft_strlen(const char *s)
// {
//     size_t i;

//     i = 0;
//     while (s[i])
//         i++;
//     return (i);
// }

// int     ft_memcmp(const void *b1, const void *b2, size_t n)
// {
//     unsigned char *s1;
//     unsigned char *s2;
//     size_t i;

//     s1 = (unsigned char *)b1;
//     s2 = (unsigned char *)b2;
//     i = 0;
//     while (n--)
//     {
//         if (s1[i] != s2[i])
//             break ; 
//         i++;
//     }
//     return (s1[i] - s2[i]);
// }

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t l_len;

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

int main()
{
	char s1[] = "abcd123456";
    char s2[30] = "1";
	char *ptr;

    ptr = ft_strnstr(s1, s2, 5);
	printf("ft:%s\n", ptr);
	return 0;
}