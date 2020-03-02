/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 13:07:04 by daelee            #+#    #+#             */
/*   Updated: 2020/03/02 14:39:24 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;

    if ((!s) || (ft_strlen(s) < start))
		return (NULL);
    if (!(substr = (char *)malloc(sizeof(char) * (len + 1))))
        return (NULL);
    ft_strlcpy(substr, s+start, len+1);
    return (substr);
}

int     main(void)
{
    char s[] = "";
    printf("%ld\n", ft_strlen(s));
    printf("ft : %s\n", ft_substr(s, 7, 0));
    return (0);
}