/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:14:13 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:53:16 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function search the memoryblock and return a pointer to the first appearance 
//of specific character (c)

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return ((void *)&(((unsigned char *)s)[i]));
		i++;
	}
	return (0);
}
