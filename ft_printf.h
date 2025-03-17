/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 18:10:26 by rfani             #+#    #+#             */
/*   Updated: 2025/03/17 19:12:55 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

typedef struct s_arg
{
	char	*content;
	int		length;
}	t_arg;
int		ft_printf(const char *format, ...);
int		ft_vprintf(const char *format, va_list args);
t_arg	ft_parse_convspec(const char **format, va_list args);
int		ft_print_arg(t_arg arg);
t_arg	ft_conv_char(va_list args);
t_arg	ft_conv_str(va_list args);
t_arg	ft_conv_ptr(va_list args);
t_arg	ft_conv_int(va_list args);
t_arg	ft_conv_uint(va_list args);
t_arg	ft_conv_hex(va_list args);
t_arg	ft_conv_chex(va_list args);
t_arg	ft_conv_percent(void);
char	*ft_uitoa(unsigned int n);
char	*ft_xitoa(unsigned int n);
char	*ft_lxitoa(unsigned long int n);

#endif
