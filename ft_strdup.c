/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:45:59 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 09:48:36 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    size_t  len;
    void    *m;
    if (!s1)
        return (NULL);
    len = ft_strlen(s1) + 1;
    m = malloc(len);
    if (!m)
        return(NULL);
    ft_memcpy(m,s1,len);
    return (m);
}