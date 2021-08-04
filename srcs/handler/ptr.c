/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:39:49 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 12:39:50 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_ptr(void *ptr, t_props *props)
{
	char	*str;

	str = ft_strlower(ft_ull_base((unsigned long long)ptr, 16));
	ft_putstr("0x");
	ft_putstr(str);
	props->len_print = props->len_print + ft_strlen(str) + 2;
	free(str);
	return (0);
}
