/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:40:53 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/07 18:46:15 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *temp;

    if(!lst || !del)
        return ;
    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst,del);
        *lst = temp;
    }
    *lst = NULL;
}