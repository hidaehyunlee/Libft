/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 21:04:42 by daelee            #+#    #+#             */
/*   Updated: 2020/03/01 14:07:05 by daelee           ###   ########.fr       */
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

size_t      ft_strlcat(char *dest, const char *src, size_t dstsize)
{
    size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && dest_len + 1 + i < dstsize)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	if (dstsize < dest_len)
		return (dstsize + src_len);
	return (dest_len + src_len);
}

int     main()
{
    char dest[50] = "xxx";
    const char str[] = "0123456789";
    printf("%ld...%s\n", ft_strlcat(dest, str, 14), dest);
    return 0;
}
