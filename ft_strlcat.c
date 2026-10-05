/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:24:53 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/05 16:44:12 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src,size_t n)
{
    size_t  i;
    size_t  keep;
    size_t  len;

    i = 0;
    keep = ft_strlen(dest);
    len = ft_strlen(dest);
    if(n < len)
        return(n+ft_strlen(src));
    while (src[i] && i < (n - keep - 1))
    {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[+i] = 0;
    return(keep + ft_strlen(src));
}

