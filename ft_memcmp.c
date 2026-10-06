/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:17:52 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 11:18:27 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1,const void *s2,size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
        return (0);
    while (i < n-1 &&((unsigned char *)s1)[i] == ((unsigned char *)s2)[i])
        i++;
    return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}