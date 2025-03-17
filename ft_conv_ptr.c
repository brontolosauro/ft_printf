/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:52:37 by rfani             #+#    #+#             */
/*   Updated: 2025/03/17 11:50:12 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"

t_arg	ft_conv_ptr(va_list args);

t_arg	ft_conv_ptr(va_list args)
{
	t_arg				arg;
	unsigned long int	n;
	char				*str;
	char				*prefix;

	n = (unsigned long int)va_arg(args, void *);
	prefix = "0x";
	str = ft_strjoin(prefix, ft_lxitoa(n));
	arg.content = str;
	arg.length = ft_strlen(str);
	return (arg);
}
