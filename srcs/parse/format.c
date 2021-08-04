/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:39:58 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 21:28:26 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse_specifier(t_props *props)
{
	if (!ft_strchr("cspiudxX%", props->format[props->index + 1]))
	{
		props->index++;
		return (0);
	}
	dispatch_specifier(props->format[props->index + 1], props);
	return (1);
}
