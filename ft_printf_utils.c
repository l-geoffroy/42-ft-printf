/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 11:50:35 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/07/31 11:50:36 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*str_create(int c, int len)
{
	char	*str;

	str = malloc(sizeof(char) * (len + 1));
	ft_memset(str, c, len);
	str[len] = '\0';
	return (str);
}
