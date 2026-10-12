/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 15:35:52 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:10:16 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function check if the ascii number with in printable range (32-126)
// if yes return 1

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
