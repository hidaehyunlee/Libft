/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 21:04:45 by daelee            #+#    #+#             */
/*   Updated: 2020/03/06 16:56:28 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_calloc(size_t nmemb, size_t size)
{
    void    *mem;

    if (!(mem = malloc(nmemb * size)))
        return (NULL);
    ft_bzero(mem, (nmemb * size));
    return(mem);
}