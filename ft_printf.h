/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmelag <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 11:31:52 by carmelag          #+#    #+#             */
/*   Updated: 2023/12/16 11:42:00 by carmelag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);

void	ft_putchar_pf(char c, int *counter);
void	ft_putstr_pf(char *str, int *counter);
void	ft_putnbr_pf(int n, int *counter);
void	ft_putnbrun_pf(unsigned int n, int *counter);
void	ft_puthex_pf(unsigned int x, char xX, int *counter);
void	ft_putptr_pf(void *ptr, int *counter);

#endif 
