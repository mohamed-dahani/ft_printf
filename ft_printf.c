/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 13:31:12 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/30 14:55:10 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int check_aplha(va_list list, char c);

int	ft_printf(const char *string, ...)
{
	va_list	list;
	int		result;
	int		i;

	va_start(list, string);
	result = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			result += check_aplha(list, string[i]);
		}
		else
			result += ft_putchar(string[i]);
		i++;
	}
	va_end(list);
	return (result);
}

static int check_aplha(va_list list, char c)
{
	int	result;

	result = 0;
	if (c == 'c')
		result += ft_putchar(va_arg(list, int));
	else if (c == 's')
		result += ft_putstr(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		result += ft_putnbr(va_arg(list, int));
	return (result);
}
