/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 21:41:43 by daelee            #+#    #+#             */
/*   Updated: 2020/03/02 14:20:27 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *str)
{
    int i;
    int len;
    char *new_str;

    len = 0;
    while (str[len])
        len++;
    new_str = (char *)malloc(sizeof(char) * (len + 1));
    if (!(new_str))
        return (NULL);
    i = 0;
    while (str[i])
    {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}

int		main(void)
{
	char arr[] = "";

	printf("%s\n", ft_strdup(arr));
	return (0);
}