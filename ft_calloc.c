/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:32:12 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 09:05:27 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function use for reserve a block memory like malloc but and fill it with 
//zero bytes

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if (size && count > ((size_t)-1 / size))
		return (NULL);
	m = malloc(count * size);
	if (!m)
		return (NULL);
	ft_bzero(m, size * count);
	return (m);
}
