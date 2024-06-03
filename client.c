
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 09:55:47 by nosman            #+#    #+#             */
/*   Updated: 2024/03/13 10:59:09 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Minitalk.h"

void	send_signals(int pid, char *str, int strlen)
{
	int	i;
	int	j;

	i = 0;
	if (pid == 0 || pid > 4194304)
	{
		perr("invalid PID\nHINT! are you in range of pid_t?");
		exit (EXIT_FAILURE);
	}
	while (i <= strlen)
	{
		j = 0;
		while (j <= 7)
		{
			if ((str[i] >> j) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j++;
			usleep(250);
		}
		i++;
	}
}

int	main(int arc, char **arv)
{
	int		pid;
	char	*str;
	int		i;

	i = 0;
	if (arc == 3)
	{
		if (arv[1][0])
			i++;
		while (ft_isdigit(arv[1][i]))
			i++;
		if (arv[1][i] != '\0')
		{
			ft_printf("%s: %s: must be process ID\n", arv[0], arv[1]);
			exit (EXIT_FAILURE);
		}
		pid = ft_atoi(arv[1]);
		str = arv[2];
		send_signals(pid, str, ft_strlen(str));
		return (0);
	}
	else
		return (perr("wrong num of ARGS"), exit(EXIT_FAILURE), (0));
	return (0);
}
