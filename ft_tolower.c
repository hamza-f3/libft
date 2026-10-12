/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:42:36 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:31:01 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this function return the ascii for the lowercase character of its possible

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
