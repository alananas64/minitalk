/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexalower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:18:40 by nosman            #+#    #+#             */
/*   Updated: 2024/03/09 13:24:22 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_hexalower(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_hexalower(nb / 16);
		ft_hexalower(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'a');
	}
}

int	ft_puthexalower(unsigned long long nb)
{
	int	i;

	i = 0;
	ft_hexalower(nb);
	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}
