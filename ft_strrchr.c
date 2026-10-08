/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:06:52 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:49:48 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function search the string and return a pointer to the last appearance 
//of specific character (c)

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i && (char)c != s[i])
		i--;
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
