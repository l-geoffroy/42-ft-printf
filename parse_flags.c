/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:51:03 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:51:04 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_flags(char flag, t_specifier *specifier)
{
	if (flag == '-')
		specifier->flags.pad_zero = !(specifier->flags.pad_right = 1);
	else if (flag == '+')
		specifier->flags.prepend_space = !(specifier->flags.pos = 1);
	else if (flag == ' ')
		specifier->flags.prepend_space = (!specifier->flags.pos);
	else if (flag == '#')
		specifier->flags.alt_form = 1;
	else if (flag == '0')
		specifier->flags.pad_zero = (!specifier->flags.pad_right);
	else if (flag == '.')
		specifier->flags.pad_zero = !(specifier->flags.f_prec = 1);
}
