/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 13:15:38 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/05 14:35:22 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	l_s;
	char	*m;

	if (!s)
		return (NULL);
	l_s = ft_strlen(s);
	if (start >= l_s)
		return (ft_strdup(""));
	if ((l_s - start) < len)
	{
		m = malloc(l_s - start + 1);
		if (!m)
			return (NULL);
		ft_strlcpy(m, &s[start], (l_s - start + 1));
	}
	else
	{
		m = malloc(len + 1);
		if (!m)
			return (NULL);
		ft_strlcpy(m, &s[start], (len + 1));
	}
	return (m);
}
