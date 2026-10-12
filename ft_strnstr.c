/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 20:43:44 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 09:03:52 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function searches for the first occurrence of the substring little
//inside string big till it get at most len of character big

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] && big[i + j] == little[j] && (i + j) < len)
				j++;
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
