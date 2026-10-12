/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 22:13:36 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 11:36:00 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main ()
{
    t_list *node;
    node = ft_lstnew(ft_strdup("new node"));
    if (!node)
        printf("%s, failed");
    printf("%s, content is ",(char *)node->content);
    printf("%p, pointed to ",(void *)node->next);
    free(node->content);
    free(node);
}
*/
