/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:52:21 by rfani             #+#    #+#             */
/*   Updated: 2025/03/17 01:19:56 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"
#include <stdarg.h>

t_arg	ft_conv_hex(va_list args);

t_arg	ft_conv_hex(va_list args)
{
	t_arg			arg;
	unsigned int	n;
	char			*str;

	n = va_arg(args, unsigned int);
	str = ft_xitoa(n);
	arg.content = str;
	arg.length = ft_strlen(str);
	return (arg);
}
