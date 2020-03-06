/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 22:13:13 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 17:04:36 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char                *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *newstr;
    unsigned int    len;
    unsigned int    i;

    if (s == 0 || f == 0)
        return (NULL);
    len = ft_strlen(s);
    if (!(newstr = (char *)malloc(sizeof(char)*(len + 1))))
        return (NULL);
    i = 0;
    while (s[i])
    {
        newstr[i] = f(i, s[i]);
        i++;
    }
    newstr[i] = '\0';
    return (newstr);
}