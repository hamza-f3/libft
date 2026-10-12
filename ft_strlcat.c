/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:24:53 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:30:00 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this fucntion return the length of the tried concated strings 

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (n <= dest_len)
		return (n + ft_strlen(src));
	while (src[i] && i < n - (dest_len - i) - 1)
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = 0;
	return ((dest_len - i) + src_len);
}
