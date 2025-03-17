/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:52:41 by rfani             #+#    #+#             */
/*   Updated: 2025/03/17 11:50:28 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft/libft.h"
#include "ft_printf.h"

t_arg	ft_conv_str(va_list args);

t_arg	ft_conv_str(va_list args)
{
	t_arg	arg;
	char	*str;

	str = va_arg(args, char *);
	arg.content = str;
	arg.length = ft_strlen(str);
	return (arg);
}
