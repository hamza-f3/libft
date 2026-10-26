/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:00:18 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/07 21:06:03 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*m;

	if (!s || !f)
		return (NULL);
	m = malloc(ft_strlen(s) + 1);
	if (!m)
		return (NULL);
	i = 0;
	while (s[i])
	{
		m[i] = f(i, s[i]);
		i++;
	}
	m[i] = 0;
	return (m);
}
/*
char f(unsigned int i, char c)
{
	if (i % 2 == 0)
		return c - 32;
	return c;
}
int main ()
{
	char *s = "hello world";
	char *map = ft_strmapi(s,f);
	printf("%s", map);
	free(map);
}*/
