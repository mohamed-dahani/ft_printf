/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:21:09 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/30 17:24:12 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *string, ...);
int				ft_putchar(char c);
int				ft_putstr(char *str);
int				ft_putnbr(int nbr);
unsigned long	convert_hexa(unsigned long nbr);

#endif