/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:17:48 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/29 15:57:09 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putnbr(int nbr)
{
	int	result;

	result = 0;
	if (nbr = -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nbr < 0)
	{
		result += write(1, "-", 1);
		result += nbr = -nbr;
	}
	if (nbr >= 10)
	{
		result += ft_putnbr(nbr / 10);
	}
	result += ft_putchar(nbr % 10 + '0');
	return (result);
}