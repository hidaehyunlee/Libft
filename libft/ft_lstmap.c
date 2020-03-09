/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 00:14:56 by daelee            #+#    #+#             */
/*   Updated: 2020/03/09 20:38:51 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list      *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new_head;
    t_list  *new_next;
    t_list  *curr;

    if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
    if ((new_head = ft_lstnew(f(lst->content))) == NULL)
        return (NULL);
    curr = new_head;
    lst = lst->next;
    while (lst)
    {
        if ((new_next = ft_lstnew(f(lst->content))) == NULL)
        {
           ft_lstclear(&new_head, del);
           return (NULL);
        }
        curr->next = new_next;
        curr = new_next;
        lst = lst->next;
    }
    return (new_head);
}