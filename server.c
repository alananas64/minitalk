/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 09:56:55 by nosman            #+#    #+#             */
/*   Updated: 2024/03/31 10:34:18 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

void	receive_signals(int signal)
{
	static int	c = 0;
	static int	i = 0;

	if (signal == SIGUSR1)
	{
		c = c | (1 << i);
	}
	if (signal == SIGUSR2)
	{
		c = c | (0 << i);
	}
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		if (!c)
			ft_printf("\n");
		c = 0;
		i = 0;
	}
}

int	main(int arc, char **arv)
{
	(void)arv;
	if (arc == 1)
	{
		ft_printf("-------------------------------\nPID is: %d\n", getpid());
		ft_printf("-------------------------------\n");
		while (1)
		{
			signal(SIGUSR1, receive_signals);
			signal(SIGUSR2, receive_signals);
			pause();
		}
	}
	else
	{
		perr("invalid number of [ARGS]");
		exit (EXIT_FAILURE);
	}
	return (0);
}
