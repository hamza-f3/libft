/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:19:59 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:10:43 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function check if the ascii is a alphabatic character if yes return 1

#include "libft.h"

int	ft_isalpha(int n)
{
	if ((n >= 65 && n <= 90) || (n >= 97 && n <= 122))
		return (1);
	return (0);
}
/*
int main ()
{
  printf("%d\n", ft_isalpha(97));
  printf("%d\n", isalpha(97));
}*/
