/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdahani <mdahani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:14:47 by mdahani           #+#    #+#             */
/*   Updated: 2024/11/30 13:42:20 by mdahani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>


int sum(int len, ...)
{
    va_list list;
    
    va_start(list, len);
    int res = 0;
    int tmp = 0;
    int i = 0;
    while (i < len)
    {
        tmp = va_arg(list, int);
        res+= tmp;
        i++;
    }
    va_end(list);
    return (res);
}

int main()
{
    printf("%d\n", sum(4, 2, 2, 2, 2));
}