/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmelag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:52:33 by carmelag          #+#    #+#             */
/*   Updated: 2023/12/27 17:15:31 by carmelag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_pf(int n, int *counter)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*counter) += 11;
	}
	if (n < 0)
	{
		ft_putchar_pf('-', counter);
		n *= -1;
	}
	if (n < 10)
		ft_putchar_pf(n + '0', counter);
	else
	{
		ft_putnbr_pf(n / 10, counter);
		ft_putnbr_pf(n % 10, counter);
	}
}
