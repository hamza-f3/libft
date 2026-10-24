/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 19:09:03 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 11:45:05 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_lst;
	void	*m_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		m_content = f(lst->content);
		node = ft_lstnew(m_content);
		if (!node)
		{
			ft_lstclear(m_content, del);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
void del (void * content)
{
	free (content);
}
void *f(void * content)
{
	char *str = ft_strdup((char *)content);
	int i = 0;
	while (str[i] && str)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
		i++;
	}
	return (void *)str;
}
int main ()
{
	t_list *head;
	t_list *new;
	t_list *cur;
	head = ft_lstnew(ft_strdup("hello"));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("jsdfa")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("ajskd")));
	new = ft_lstmap(head, f, del);
	cur = new;
    while (cur)
    {
        printf("%s ", (char *)cur->content);
        cur = cur->next;
    }
	ft_lstclear(&head, del);
	ft_lstclear(&new, del);
}

