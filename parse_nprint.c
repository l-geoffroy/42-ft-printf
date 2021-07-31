/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_nprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:51:26 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:51:27 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse_nprint(t_specifier *specifier)
{
	unsigned long	*container;

	container = va_arg(specifier->args, void *);
	*container = specifier->nprint;
}
