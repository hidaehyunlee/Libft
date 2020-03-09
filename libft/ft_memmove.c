/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:19:43 by daelee            #+#    #+#             */
/*   Updated: 2020/03/10 00:26:02 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void                    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *new_dest;
    unsigned char       *new_src;

    if (dest == src || n == 0)
		return (dest);
    if (dest < src)
    {
        new_dest = (unsigned char *)dest;
        new_src = (unsigned char *)src;
        while (n--)
            *new_dest++ = *new_src++;
    }
    else
    {
        new_dest = (unsigned char *)dest + (n - 1);
        new_src = (unsigned char *)src + (n - 1);
        while (n--)
            *new_dest-- = *new_src--;
    }
    return (dest);
}

int     main()
{
    char	src[] = "lorem ipsum dolor sit amet";
	char	*dest; // orem ipsum dolor sit amet

    dest = src + 1;
    printf("dest : %s\n", dest);
    printf("%s\n", ft_memmove(src, dest, 8));
    write(1, src, 22);
    return 0;
}