/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nosman <nosman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:00:53 by nosman            #+#    #+#             */
/*   Updated: 2024/03/10 16:07:26 by nosman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
int		ft_atoi(const char *str);
int		ft_printf(const char *conversions, ...);
int		ft_putchar(int c);
int		ft_putstring(char *str);
int		ft_putnbr(int nb);
int		ft_putunsignedint(unsigned int nb);
int		ft_puthexalower(unsigned long long nb);
int		ft_puthexaupper(unsigned long long nb);
int		ft_putpointer(void *p);
void	perr(char *str);
int		ft_isdigit(char c);

#endif
