/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:52:37 by rfani             #+#    #+#             */
/*   Updated: 2025/03/26 17:44:34 by rfani            ###   ########.fr       */
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
	char				*temp;

	n = (unsigned long int)va_arg(args, void *);
	if (!n)
	{
		str = ft_calloc(5, sizeof(char));
		str = "(nil)";
	}
	else
	{
		prefix = "0x";
		str = ft_strjoin(prefix, ft_lxitoa(n));
	arg.content = str;
	arg.length = ft_strlen(str);
	return (arg);
}
