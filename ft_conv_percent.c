/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:52:33 by rfani             #+#    #+#             */
/*   Updated: 2025/03/17 11:47:49 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_arg	ft_conv_percent(void);

t_arg	ft_conv_percent(void)
{
	t_arg	arg;

	arg.content = "%";
	arg.length = 1;
	return (arg);
}
