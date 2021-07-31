/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:51:48 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:51:59 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_unsigned(t_specifier *specifier)
{
	unsigned long long	input;

	input = va_arg(specifier->args, unsigned int);
	specifier->fmt_str = int_handler(input, specifier, "0123456789");
	width_handler(specifier);
}
