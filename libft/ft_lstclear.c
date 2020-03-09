/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/08 23:13:10 by daelee            #+#    #+#             */
/*   Updated: 2020/03/09 19:13:47 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *curr;
    t_list  *next;

    curr = *lst;
    while (curr)
    {
        next = curr->next;
        ft_lstdelone(curr, del);
        curr = next;
    }
    *lst = NULL;
}