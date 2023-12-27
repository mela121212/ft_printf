/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmelag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:51:30 by carmelag          #+#    #+#             */
/*   Updated: 2023/12/27 17:14:36 by carmelag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list arg, char *str, int *counter)
{
	if (*str == 'c')
		ft_putchar_pf(va_arg(arg, int), counter);
	else if (*str == 's')
		ft_putstr_pf(va_arg(arg, char *), counter);
	else if (*str == 'p')
		ft_putptr_pf(va_arg(arg, void *), counter);
	else if (*str == 'i' || *str == 'd')
		ft_putnbr_pf(va_arg(arg, int), counter);
	else if (*str == 'u')
		ft_putnbrun_pf(va_arg(arg, unsigned int), counter);
	else if (*str == 'x' || *str == 'X')
		ft_puthex_pf(va_arg(arg, unsigned int), *str, counter);
	else if (*str == '%')
		ft_putchar_pf(*str, counter);
}

int	ft_printf(char const *str, ...)
{
	va_list		arg;
	int			counter;

	counter = 0;
	va_start(arg, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			ft_format(arg, (char *)str, &counter);
		}
		else
			ft_putchar_pf(*str, &counter);
		str++;
	}
	va_end(arg);
	return (counter);
}
