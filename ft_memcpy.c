/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:15:47 by daelee            #+#    #+#             */
/*   Updated: 2020/02/28 12:56:13 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *new_dest;
    unsigned char   *new_src;
    size_t          i;
    
    new_dest = dest;
    new_src = (unsigned char *)src;
    i = 0;
    while (i++ < n)
        *new_dest++ = *new_src++;
    return (dest);
}

// int main() 
// {
//   char src[] = "Sample string";
//   char dest1[40];
//   char dest2[40];

//   memcpy(dest1, src, strlen(src) + 1);
//   memcpy(dest2, "copy successful", 6);
//   printf("원본: %s\nsrc 복사: %s\n문자열 복사: %s\n", src, dest1, dest2);
//   return (0);
// }

int main() {
  char str[] = "0123456789";
  ft_memcpy(str + 4, str + 2, 6);
  puts(str);
  return 0;
}