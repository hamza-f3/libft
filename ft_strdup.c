/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:45:59 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 09:07:03 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function duplicates the string by using malloc and copy the string to 
//the malloc

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	void	*m;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + 1;
	m = malloc(len);
	if (!m)
		return (NULL);
	ft_memcpy(m, s1, len);
	return (m);
}
