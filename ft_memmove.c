/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:04:35 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/05 16:16:02 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest,const void *src, size_t n)
{
    size_t  i;
    i = 0;
    if (!dest && !src)
        return (NULL);
    if ((unsigned   char*)dest >(unsigned   char*)src )
    {
        while (n > 0)
        {
            n--;
            ((unsigned   char*)dest)[n] =((unsigned   char*)src)[n];
        }
    }
    else
    {
        while (i < n)
        {
             ((unsigned   char*)dest)[i] =((unsigned   char*)src)[i];
             i++;
        }
    }
    return(dest);
}