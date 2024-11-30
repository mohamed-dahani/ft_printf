/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:57:46 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/30 18:07:36 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	generte_address(unsigned long nbr);

int	convert_hexa(unsigned long nbr)
{
	int	result;

	result = 0;
	result += ft_putstr("0x");
	result += generte_address(nbr);
	return (result);
}

static int	generte_address(unsigned long nbr)
{
	int		result;
	char	*hexa_digits;

	result = 0;
	hexa_digits = "0123456789abcdef";
	if (nbr >= 16)
	{
		result += generte_address(nbr / 16);
		result += generte_address(nbr % 16);
	}
	else
		result += ft_putchar(nbr[hexa_digits]);
	return (result);
}
