/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:09:03 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/07 20:33:15 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list *node;
    t_list  *new_lst;
   

    if (!lst || !f || !del)
        return NULL;

    new_lst = NULL;
    while (lst)
    {
        node = ft_lstnew(f(lst->content));
        if (!node)
        {
           
            ft_lstclear(&new_lst,del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst,node);
        lst = lst->next;
    }
    return (new_lst);
}