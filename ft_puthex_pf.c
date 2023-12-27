/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmelag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:52:14 by carmelag          #+#    #+#             */
/*   Updated: 2023/12/16 12:23:22 by carmelag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_pf(unsigned int x, char xX, int *counter)
{
	char	string[25];
	char	*base_char;
	int		i;

	if (xX == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_pf('0', counter);
		return ;
	}
	while (x != 0)
	{
		string[i] = base_char[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_pf(string[i], counter);
}

//Por ejemplo, para convertir el número decimal 255 a
//hexadecimal, se divide sucesivamente por 16:
//255 / 16 = 15 con un residuo de 15 (F en hexadecimal)
//15 / 16 = 0 con un residuo de 15 (F en hexadecimal)
//Por lo tanto, 255 en decimal es FF en hexadecimal.

//hexadecimal - x or X
