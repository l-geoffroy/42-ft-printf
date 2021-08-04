/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uint.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:39:53 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 12:39:54 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_uint(unsigned int i, t_props *props)
{
	int		len;

	len = 0;
	i = (unsigned int)(4294967295 + 1 + i);
	ft_u_putnbr(i);
	props->len_print = props->len_print + len_u_nbr(i);
	return (0);
}
