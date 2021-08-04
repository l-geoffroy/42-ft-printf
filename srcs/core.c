/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:40:15 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 21:22:57 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dispatch_specifier(char c, t_props *props)
{
	if (c == 'c')
		handle_char(va_arg(props->args, int), props);
	else if (c == 's')
		handle_str(va_arg(props->args, char *), props);
	else if (c == 'p')
		handle_ptr(va_arg(props->args, void *), props);
	else if (c == 'd' || c == 'i')
		handle_int(va_arg(props->args, int), props);
	else if (c == 'u')
		handle_uint((unsigned int)va_arg(props->args, unsigned int), props);
	else if (c == 'x')
		handle_hex((unsigned int)va_arg(props->args, unsigned int), props, 0);
	else if (c == 'X')
		handle_hex((unsigned int)va_arg(props->args, unsigned int), props, 1);
	else if (c == '%')
		handle_per(props);
	(void)props;
}
