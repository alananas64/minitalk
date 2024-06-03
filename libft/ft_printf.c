/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:50:58 by nosman            #+#    #+#             */
/*   Updated: 2024/03/09 13:24:11 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_conversions(va_list args, const char conversions)
{
	int	value;

	value = 0;
	if (conversions == 'c')
		value = ft_putchar(va_arg(args, int));
	else if (conversions == 's')
		value = ft_putstring(va_arg(args, char *));
	else if (conversions == 'p')
		value = ft_putpointer(va_arg(args, void *));
	else if ((conversions == 'd') || (conversions == 'i'))
		value = ft_putnbr(va_arg(args, int));
	else if (conversions == 'u')
		value = ft_putunsignedint(va_arg(args, unsigned int));
	else if (conversions == 'x')
		value = ft_puthexalower(va_arg(args, unsigned int));
	else if (conversions == 'X')
		value = ft_puthexaupper(va_arg(args, unsigned int));
	else if (conversions == '%')
		value = ft_putchar('%');
	else
		value = ft_putchar(conversions);
	return (value);
}

int	ft_printf(const char *conversions, ...)
{
	va_list	args;
	int		char_num;
	int		i;

	i = 0;
	char_num = 0;
	va_start(args, conversions);
	while (conversions[i] != '\0')
	{
		if (conversions[i] == '%')
		{
			if (conversions[i + 1] == '\0')
				break ;
			char_num = char_num + ft_conversions(args, conversions[i + 1]);
			i++;
		}
		else
		{
			char_num = char_num + ft_putchar(conversions[i]);
		}
		i++;
	}
	va_end(args);
	return (char_num);
}
