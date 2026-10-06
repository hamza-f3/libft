/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 16:40:40 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 10:06:15 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count(long n)
{
    int count;
    count = 0;
    if (n <= 0)
        count++;
    while (n != 0)

    {
        n = n / 10;
        count++;
    }
    return (count);
}
char *ft_itoa(int n)
{
    char *m;
    int len;
    long num;

    num = n;
    len = count(num);
    m = malloc(sizeof(char) * (len + 1));
    if (!m)
        return (NULL);
    m[len] = '\0';
    if (num = 0)
        m[0] = '0';
    if (num < 0)

    {
        m[0] = '-';
        num *= -1;
    }
    while (num > 0)

    {
        len--;
        m[len] = (num % 10) + '0';
        num = num / 10;
    }
    return (m);
}