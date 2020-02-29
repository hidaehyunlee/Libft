/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:15:47 by daelee            #+#    #+#             */
/*   Updated: 2020/02/29 11:04:07 by daelee           ###   ########.fr       */
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

int main() 
{
  char str2[] = "0123456789";
  char str[] = "0123456789";
  ft_memcpy(str + 4, str + 2, 0);
  memcpy(str2 + 4, str2 + 2, 0);
  puts(str);
  printf("\n---------real\n");
  puts(str2);
  return 0;
}