/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 18:18:53 by ekarabud          #+#    #+#             */
/*   Updated: 2023/09/03 20:10:42 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb2(void)
{
	int		b1;
	int		b2;

	b1 = 0;
	while (b1 <= 98)
	{
		b2 = b1 + 1;
		while (b2 <= 99)
		{
			ft_putchar(48 + b1 / 10);
			ft_putchar(48 + b1 % 10);
			ft_putchar(' ');
			ft_putchar(48 + b2 / 10);
			ft_putchar(48 + b2 % 10);
			b2++;
			if (b1 != 98)
				write(1, ", ", 2);
		}
		b1++;
	}
}
