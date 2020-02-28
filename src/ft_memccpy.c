/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:09:07 by leedae            #+#    #+#             */
/*   Updated: 2020/02/28 13:36:49 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                  *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char     *new_dest;
    unsigned char     *new_src;
    unsigned char     find;
    size_t            i;
    
    new_dest = dest;
    new_src = (unsigned char *)src;
    find = c;
    i = 0;
    while(i < n)
    {
        new_dest[i] = new_src[i];
        if(new_src[i] == find)
            return (dest + (i + 1));
        i++;
    }
    return (0);
}

int   main(void)
{
   size_t   i = 10;
   int      find = 'G';
   char   str1[25] = "gwlee@student.42seoul.kr";
   char   str2[25] = "gwlee@student.42seoul.kr";
   char   str3[12] = "LeeGwangbok";

   printf("Testcase : %s\n", str1);
   printf("Origin result : %s\n", memccpy(str1, str3, find, i));
   printf("Origin result2 : %s\n", str1);
   printf("Your ft result : %s\n", ft_memccpy(str2, str3, find, i));
   printf("Your ft result2 : %s\n", str2);
}