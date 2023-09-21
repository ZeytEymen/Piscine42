/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:08:17 by ekarabud          #+#    #+#             */
/*   Updated: 2023/09/21 15:42:53 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	rev;

	rev = argc - 1;
	i = 0;
	while (rev > i)
	{
		j = 0;
		while (argv[rev][j])
		{
			write(1, &argv[rev][j], 1);
			j++;
		}
		write(1, "\n", 1);
		rev--;
	}
	return (0);
}
