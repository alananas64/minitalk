/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignedint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 10:13:42 by nosman            #+#    #+#             */
/*   Updated: 2024/03/09 13:24:44 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsignedint(unsigned int nb)
{
	int	charnum;

	charnum = 0;
	if (nb >= 10)
	{
		charnum = charnum + ft_putunsignedint(nb / 10);
		charnum = charnum + ft_putunsignedint(nb % 10);
	}
	else
	{
		charnum = charnum + ft_putchar(nb + '0');
	}
	return (charnum);
}
