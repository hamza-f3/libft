/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:40:47 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/07 20:57:06 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int main()
{
	t_list *head;
	head = ft_lstnew(ft_strdup("1"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("3")));
	printf("%d", ft_lstsize(head));
	while (head)
	{
		t_list *tmp;
		tmp = head;
		head = head->next;
		free(tmp->content);
		free(tmp);
	}
}*/
