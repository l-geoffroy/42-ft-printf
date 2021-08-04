/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:39:46 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 12:39:47 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_int(int i, t_props *props)
{
	int		len;

	len = 0;
	ft_putnbr(i);
	props->len_print = props->len_print + len_nbr(i);
	return (0);
}
