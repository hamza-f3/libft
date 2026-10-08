/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:28:01 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 10:08:51 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
int main ()
{
    t_list *head;
    t_list *node;

    head =ft_lstnew("second");
    node = ft_lstnew("first");
    printf("%s content of head is ", (char *)head -> content);
    printf("%s content of next is ", (char *)head -> next->content);
    free(head->next->content);
    free(head->next);
    free(head->content);
    free(head);
}
