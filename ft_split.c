/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 10:08:10 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/06 10:10:32 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *s, char c)
{
    int count;
    int i;
    count = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i] != '\0')
            count++;
        while (s[i] && s[i] != c)
            i++;
    }
    return (count);
}
static char **free_a(char **p, int i)
{
    while (i > 0)
    {
        i--;
        free(p[i]);
    }
    free(p);
    return (NULL);
}
static char **fill(char const *s, char c, char **m)
{
    size_t i;
    size_t j;
    size_t start;

    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
        {
            start = i;
            while (s[i] && s[i] != c)
                i++;
            m[j] = ft_substr(s, start, i - start);
            if (!m[j])
                return (free_a(m, j));
            j++;
        }
    }
    m[j] = NULL;
    return (m);
}
char **ft_split(char const *s, char c)
{
    char **m;

    if (!s)
        return (NULL);
    m = malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!m)
        return (NULL);
    return (fill(s, c, m));
}