/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_width_precision.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:51:51 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:51:57 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_width_precision(char d, t_specifier *specifier, char mode)
{
	if (mode == 'w')
		specifier->flags.width = specifier->flags.width * 10 + (d - '0');
	else if (mode == 'p')
		specifier->flags.prec = specifier->flags.prec * 10 + (d - '0');
}
