/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:06:52 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 09:09:49 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(char *s, int c)
{
    int     i;

    i = ft_strlen(s);
    while (i && (unsigned char)c != s[i])
        i--;
    if ((char)c == s[i])
        return ((char *)&s[i]);
    return (NULL);
}