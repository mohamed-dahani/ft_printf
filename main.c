/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:25:57 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/30 19:34:51 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
int main(void)
{
	char c = 'a';
	char *str = "mohamed";
	int nbr = 2000;
	int dec = 123;
	int hexa = 2024;
	ft_printf("%c\n", c);
	ft_printf("%s\n", str);
	ft_printf("%d\n", nbr);
	ft_printf("%p\n", &str);;
	ft_printf("%u\n", dec);
	ft_printf("%x\n", hexa);
	ft_printf("%X\n", hexa);
}