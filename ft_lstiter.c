/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:48:34 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/07 20:55:09 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
void	print(void *contnt)
{
	printf("%s \n",(char*)contnt);
}
int main ()
{
	t_list *head;
	head = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("world")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("while")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("wor")));
	ft_lstiter(head, print);
	while(head)
	{
		t_list *temp;
		temp = head;
		head = head->next;
		free(temp->content);
		free(temp);
	}
}
