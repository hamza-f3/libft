/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:48:47 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/07 20:56:06 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main ()
{
  t_list *head;
  t_list *last;
  
  head = ft_lstnew(ft_strdup("head"));
  head->next = ft_lstnew(ft_strdup("second"));
  head->next->next = ft_lstnew(ft_strdup("last"));
  last = ft_lstlast(head);
  if (last)
    printf("last node content is%s\n", (char *)last->content);
  while (head)
  {
    t_list *temp;
    temp = head;
    head = head->next;
    free(temp->content);
    free(temp);
  }
}*/
