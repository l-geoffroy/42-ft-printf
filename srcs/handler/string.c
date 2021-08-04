/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:39:52 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 21:47:59 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	handle_str(char *s, t_props *props)
{
	int	len;

	len = 0;
	if (!s)
	{
		ft_putstr("(null)");
		len = len + 6;
	}
	else
	{
		ft_putstr(s);
		len = len + ft_strlen(s);
	}
	props->len_print = props->len_print + len;
	return (0);
}
