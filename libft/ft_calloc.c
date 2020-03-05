/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 21:04:45 by daelee            #+#    #+#             */
/*   Updated: 2020/03/01 21:36:03 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void    ft_bzero(void *b, size_t n)
// {
//     unsigned char   *dest;
//     size_t          i;

//     dest = b;
//     i = 0;
//     while(i++ < n)
//         *dest++ = 0;
// }

void    *ft_calloc(size_t nmemb, size_t size)
{
    void *mem;

    if (!(mem = malloc(nmemb * size)))
        return (NULL);
    ft_bzero(mem, (nmemb * size));
    return(mem);
}

int main()
{
    int i = 0;
    int *arr;

    arr = ft_calloc(20, sizeof(int));
    for (i=0; i<22; i++)
        printf("%d ", arr[i]);
    return (0);
}
