/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:40:16 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 21:25:14 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	t_props	props;

	va_start(props.args, format);
	props.format = (char *)format;
	props.index = 0;
	props.len_print = 0;
	while (props.format[props.index])
	{
		if (props.format[props.index] == '%')
		{
			parse_specifier(&props);
			props.index++;
		}
		else
		{
			ft_putchar(props.format[props.index]);
			props.len_print++;
		}
		props.index++;
	}
	va_end(props.args);
	return (props.len_print);
}
