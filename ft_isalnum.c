/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 12:28:03 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:10:41 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function check if the ascii is for alphabatic or digit if yes return 1

#include "libft.h"

int	ft_isalnum(int n)
{
	if ((ft_isalpha(n)) || (ft_isdigit(n)))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main ()
{
	printf("%d", ft_isalnum(49));
	printf("%d", isalnum(49));
}*/
