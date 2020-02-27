/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 11:50:47 by daelee            #+#    #+#             */
/*   Updated: 2020/02/27 17:26:04 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *b, size_t n)
{
    unsigned char   *dest;
    size_t          i;

    dest = b;
    i = 0;
    while(i++ < n)
        *dest++ = 0;
}

int main()
{
    int i = 0;
    int arr[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    ft_bzero(arr, 16); //arr[0 ~ 3]만 0으로 초기화
    for (i=0; i<10; i++)
        printf("%d ", arr[i]);
    return (0);
}
