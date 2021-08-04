/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:40:34 by lgeoffro          #+#    #+#             */
/*   Updated: 2021/08/04 20:09:11 by lgeoffro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_props {
	int		len_print;
	char	*format;
	int		is_valid;
	int		index;
	va_list	args;
}	t_props;

int		ft_printf(const char *format, ...);
void	dispatch_specifier(char c, t_props *props);
int		parse_specifier(t_props *props);

int		handle_char(char c, t_props *props);
int		handle_str(char *s, t_props *props);
int		handle_ptr(void *ptr, t_props *props);
int		handle_int(int i, t_props *props);
int		handle_uint(unsigned int i, t_props *props);
int		handle_hex(unsigned int i, t_props *props, int upper);
int		handle_per(t_props *props);

char	*ft_ull_base(unsigned long long ull, int base);
char	*ft_strlower(char *s);
char	*ft_uitoa(int n);
int		len_nbr(int nbr);
void	ft_u_putnbr(unsigned int n);
int		len_u_nbr(unsigned int nbr);

#endif
