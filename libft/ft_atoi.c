/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 14:08:11 by daelee            #+#    #+#             */
/*   Updated: 2020/03/01 14:47:29 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isspace(char c)
{
    if (c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r')
        return (1);
    else
        return (0);
}

int     ft_atoi(const char *str)
{
    int nbr;
    int sign;
    int i;

    nbr = 0;
    sign = 1;
    i = 0;
    while ((str[i] != '\0') && ft_isspace(str[i]) == 1)
        i++;
    if (str[i] == '-')
        sign = -1;
    if ((str[i] == '-') || (str[i] == '+'))
        i++;
    while ((str[i] != '\0') && ('0' <= str[i]) && (str[i] <= '9'))
    {
        nbr = (nbr * 10) + (str[i] - '0');
        i++;
    }
    return (sign * nbr);
}

int     main()
{
    const char str[] = "    012345";
    printf("myft...%d\n", ft_atoi(str));
    return (0);
}