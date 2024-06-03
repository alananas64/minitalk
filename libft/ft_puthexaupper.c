/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaupper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:19:37 by nosman            #+#    #+#             */
/*   Updated: 2024/03/09 13:24:27 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_hexaupper(unsigned long long nb)
{
	if (nb >= 16)
	{
		ft_hexaupper(nb / 16);
		ft_hexaupper(nb % 16);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + '0');
		else
			ft_putchar(nb - 10 + 'A');
	}
}

int	ft_puthexaupper(unsigned long long nb)
{
	int	i;

	i = 0;
	ft_hexaupper(nb);
	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}
