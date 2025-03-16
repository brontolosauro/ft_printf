/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:52:16 by rfani             #+#    #+#             */
/*   Updated: 2025/03/16 23:31:03 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"
#include <stdarg.h>

t_arg	ft_conv_char(va_list args);

t_arg	ft_conv_char(va_list args)
{
	t_arg	arg;
	char	*str;

	str[0] = (char)va_arg(args, int);
	arg.content = str;
	arg.length = ft_strlen(str);
	return (arg);
}
