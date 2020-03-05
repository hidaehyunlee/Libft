/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 19:23:08 by daelee            #+#    #+#             */
/*   Updated: 2020/03/01 19:25:13 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_islower(int c)
{
    return((97 <= c) && (122 >= c));
}

int	    ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

int     main()
{
    printf("%c\n", ft_toupper('c'));
    return (0);
}