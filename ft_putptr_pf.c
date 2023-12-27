/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmelag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 10:53:12 by carmelag          #+#    #+#             */
/*   Updated: 2023/12/16 10:53:15 by carmelag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr_pf(void *ptr, int *counter)
{
	unsigned long int	ptr_adress;

	ptr_adress = (unsigned long int)ptr;
	ft_putstr_pf("0x", counter);
	ft_puthex_pf(ptr_adress, 'x', counter);
}

//Lo imprime en hexadecimal porque: 
//comúnmente, al mostrar direcciones de memoria,
//se prefiere la representación en hexadecimal.
