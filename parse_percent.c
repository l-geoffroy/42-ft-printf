/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:51:29 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:51:30 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_percent(t_specifier *specifier)
{
	specifier->fmt_str = ft_strdup("%");
	width_handler(specifier);
}
