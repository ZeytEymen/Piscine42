/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:46:58 by ekarabud          #+#    #+#             */
/*   Updated: 2023/09/03 23:12:20 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch1, char ch2, char ch3)
{
	write(1, &ch1, 1);
	write(1, &ch2, 1);
	write(1, &ch3, 1);
	if (!(ch1 == '7' && ch2 == '8' && ch3 == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '0';
	n3 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_putchar(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
