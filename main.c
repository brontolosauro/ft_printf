/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfani <rfani@student.42firenze.it>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 19:55:30 by rfani             #+#    #+#             */
/*   Updated: 2025/03/27 12:16:41 by rfani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "ft_printf.h"
#include "libft/libft.h"

int	main(void)
{
	int		a;
	int		b;
	void	*ptr;
	char	*str;
	char	*temp;

	temp = NULL;
	str = ft_calloc(9, sizeof(char));
	ptr = malloc(10);
	a = printf(" %c %s %s %s %p %p %d %i %u %x %X %% \n", '1', "ciao", str,
			temp, NULL, ptr, INT_MAX, INT_MIN, UINT_MAX + 42, UINT_MAX,
			UINT_MAX - 42);
	b = ft_printf(" %c %s %s %s %p %p %d %i %u %x %X %% \n", '1', "ciao", str,
			temp, NULL, ptr, INT_MAX, INT_MIN, UINT_MAX + 42, UINT_MAX,
			UINT_MAX - 42);
	printf(" %d %d \n", a, b);
	free(ptr);
	free(str);
	return (0);
}
