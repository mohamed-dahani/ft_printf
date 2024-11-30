/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:57:46 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/30 19:04:05 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	generte_address(unsigned long nbr, char type);

int	convert_hexa(unsigned long nbr, char type)
{
	int	result;

	result = 0;
	result += ft_putstr("0x");
	result += generte_address(nbr, type);
	return (result);
}

static int	generte_address(unsigned long nbr, char type)
{
	int		result;
	char	*hexa_digits;

	result = 0;
	if (type == 'l')
		hexa_digits = "0123456789abcdef";
	else
		hexa_digits = "0123456789ABCDEF";
	
	if (nbr >= 16)
	{
		result += generte_address(nbr / 16, type);
		result += generte_address(nbr % 16, type);
	}
	else
		result += ft_putchar(nbr[hexa_digits]);
	return (result);
}
