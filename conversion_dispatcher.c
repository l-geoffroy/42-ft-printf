/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_dispatcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:50:32 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:52:31 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	conversion_dispatcher(char c, t_specifier *specifier)
{
	if (c == 'c')
		parse_char(specifier);
	else if (c == 's')
		parse_str(specifier);
	else if (c == 'p')
		parse_hex(specifier, c);
	else if (c == 'd' || c == 'i')
		parse_int(specifier);
	else if (c == 'u')
		parse_unsigned(specifier);
	else if (c == 'x' || c == 'X')
		parse_hex(specifier, c);
	else if (c == '%')
		parse_percent(specifier);
	else if (c == 'n')
		parse_nprint(specifier);
}