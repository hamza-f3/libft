/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:43:44 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/05 14:34:44 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(l);
	if (l[i] == '\0')
		return ((char *)b);
	if (n == 0)
		return (0);
	while (b[i] && (i + l_len <= n))
	{
		if (b[i] == l[0])
		{
			j = 0;
			while (l[j] && b[i + j] == l[j])
				j++;
			if (l[j] == '\0')
				return ((char *)&b[i]);
		}
		i++;
	}
	return (0);
}
