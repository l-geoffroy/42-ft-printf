/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:50:58 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:50:59 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_char(t_specifier *specifier)
{
	char	input;

	input = (char)va_arg(specifier->args, int);
	if (!input)
		input = (specifier->is_nullc = 1);
	specifier->fmt_str = str_create(input, 1);
	width_handler(specifier);
}
