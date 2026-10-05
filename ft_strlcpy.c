/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:19:01 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/05 16:29:03 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

size_t ft_strlcpy(char * dest, const char *src, size_t n)
{
    size_t len;
    size_t i;

    i = 0;
    len = 0;
    while (src[len])
        len ++;
    while (src[i] && i < (n - 1))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return(len);
}