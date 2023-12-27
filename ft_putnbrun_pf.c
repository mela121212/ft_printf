/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrun_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmelag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:52:52 by carmelag          #+#    #+#             */
/*   Updated: 2023/12/16 12:22:23 by carmelag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbrun_pf(unsigned int u, int *counter)
{
	if (u < 10)
		ft_putchar_pf(u + '0', counter);
	else
	{
		ft_putnbr_pf(u / 10, counter);
		ft_putnbr_pf(u % 10, counter);
	}
}

//la diferencia con putnbr es simplemente no poner lo del signo
