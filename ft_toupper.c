/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaider <hhaider@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 23:07:58 by hhaider           #+#    #+#             */
/*   Updated: 2026/10/08 08:31:38 by hhaider          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//this funciton return the uppercase of the character if its possible

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
