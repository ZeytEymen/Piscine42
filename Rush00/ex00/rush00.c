/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguclu <yguclu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 09:34:32 by yguclu            #+#    #+#             */
/*   Updated: 2023/09/03 20:00:45 by yguclu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	yatay_cizgi(int x)
{
	int	i;

	i = 0;
	ft_putchar('o');
	while (i < x - 2)
	{
		ft_putchar('-');
		i++;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	dikey_cizgi(int x)
{
	int	i;

	i = 0;
	ft_putchar('|');
	while (i < x - 2)
	{
		ft_putchar(' ');
		i++;
	}
	if (x > 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = 0; 
	if (x <= 0 || y <= 0)
		return ;
	else
	{
		if (x > 0 && y > 0)
			yatay_cizgi(x);
		while (j < y - 2)
		{
			dikey_cizgi(x);
			j++;
		}
		if (y > 1)
			yatay_cizgi(x);
	}
}
