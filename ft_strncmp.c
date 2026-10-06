/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:10:00 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 09:12:42 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(char *s1,char *s2, int n)
{
    int     i;

    i = 0;
    if (n <= 0)
        return(0);
        while (s1[i] && s2[i] && s1[i] == s2[i] && i < n-1)
            i++;
        return(((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}