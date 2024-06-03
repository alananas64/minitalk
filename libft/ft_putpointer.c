/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:20:05 by nosman            #+#    #+#             */
/*   Updated: 2024/03/09 13:24:35 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_pointer(void *p)
{
	write(1, "0x", 2);
	if (p == 0)
		write(1, "0", 1);
	else
		ft_puthexalower((unsigned long long)p);
}

int	ft_putpointer(void *p)
{
	int					i;
	unsigned long long	nb;

	i = 0;
	ft_pointer(p);
	nb = (unsigned long long)p;
	if (nb == 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 16;
		i++;
	}
	return (i + 2);
}
