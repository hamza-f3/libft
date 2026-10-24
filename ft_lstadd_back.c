/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:11:59 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 11:43:58 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
/*
int main()
{
	t_list *head;
	head = ft_lstnew(ft_strdup("1"));
	ft_lstadd_back(&head,ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("3")));
	printf("%s",(char *)head->content);
	printf("%s",(char *)head->next->content);
	printf("%s",(char *)head->next->next->content);
	while (head)
	{
		t_list *temp;
		temp = head;
		head = head ->next;
		free (temp->content);
		free (temp);
	}
}*/
