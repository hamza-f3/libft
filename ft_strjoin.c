/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:49:47 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/07 21:04:17 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*m;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	m = malloc(len_s1 + len_s2 + 1);
	if (!m)
		return (NULL);
	ft_strlcpy(m, s1, len_s1 + 1);
	ft_strlcat(m, s2, len_s1 + len_s2 + 1);
	return (m);
}
