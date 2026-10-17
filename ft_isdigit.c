/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:40:35 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:10:42 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// this function check if the ascii number is digit if yes return 1
#include "libft.h"

int	ft_isdigit(int n)
{
	if (n <= '9' && n >= '0')
		return (1);
	return (0);
}
/*
int main ()
    
    printf("%d\n" , ft_isdigit(50));
  printf("%d\n", isdigit(50));
}*/
