/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 09:55:58 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 10:10:38 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1,char const *set)
{
    size_t  i;
    size_t  len;
    if(!s1 || !set)
        return(NULL);
    i = 0;
    len = ft_strlen(s1);
    while(s1[i] && ft_strchr(set,s1[i]))
        i++;
    while(len > i && ft_strchr(set,s1[len - 1]))
        len --;
    return (ft_substr(s1,i,len-i));
}