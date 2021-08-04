/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_putnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:12:17 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 19:56:51 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_u_putnbr(unsigned int n)
{
	unsigned int	nb;

	nb = n;
	if (nb >= 10)
		ft_u_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}
