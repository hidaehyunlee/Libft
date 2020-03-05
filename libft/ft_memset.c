/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:57:29 by daelee            #+#    #+#             */
/*   Updated: 2020/02/28 12:15:29 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memset(void *dest, int c, size_t n)
{
    unsigned char   *new_dest;
    unsigned char   src;
    size_t  i;

    new_dest = dest;
    src = c;
    i = 0;
    while(i++ < n)
        *new_dest++ = src;
    return (dest);
}

int main()
{
    char str[30] = "hi my name is daelee.";
    //int arr[10];
    ft_memset(str, '=', sizeof(str));
    puts(str);
    //printf("%d\n", arr[0]);
    return (0);
}