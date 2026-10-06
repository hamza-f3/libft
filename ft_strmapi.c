/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:00:18 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 10:10:36 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s,char (*f)(unsigned int,char))
{
    unsigned int    i;
    char *m;

    if(!s || !f)
        return (NULL);
    m = malloc(ft_strlen(s) + 1);
    if (!m)
        return (NULL);
    i = 0;
    while (s[i])
    {
        m[i] = f(i,s[i]);
        i++;
    }
    m[i] = 0;
    return(m);
}