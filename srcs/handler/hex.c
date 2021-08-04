/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:39:44 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 12:39:45 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_hex(unsigned int i, t_props *props, int upper)
{
	int		len;
	char	*hex;

	len = 0;
	i = (unsigned int)(4294967295 + 1 + i);
	if (!upper)
		hex = ft_strlower(ft_ull_base((unsigned long long)i, 16));
	else
		hex = ft_ull_base((unsigned long long)i, 16);
	ft_putstr(hex);
	props->len_print = props->len_print + ft_strlen(hex);
	free(hex);
	return (0);
}
