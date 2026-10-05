/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:45:45 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/05 15:53:37 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char )c;
        i++;
    }
    return (s);
}