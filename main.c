/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:55:30 by rfani             #+#    #+#             */
/*   Updated: 2025/03/26 18:22:07 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int	a;
	int	b;

	a = printf(" %p %% %s %c \n", NULL, "-", '1');
	b = ft_printf(" %p %% %s %c \n", NULL, "-", '1');
	printf(" %d %d \n", a, b);
	return (0);
}
