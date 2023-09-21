/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 06:02:13 by ekarabud          #+#    #+#             */
/*   Updated: 2023/09/20 00:31:17 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space_control(char ch)
{
	if (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\v' || ch == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	res;
	int	negative;
	int	i;

	i = 0;
	negative = 1;
	res = 0;
	while ((str[i] && !(str[i] >= '0' && str[i] <= '9')))
	{
		if (str[i] == '-' || str[i] == '+' || space_control(str[i]))
		{
			if (str[i] == '-')
				negative *= -1;
		}
		else
			return (res * negative);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * negative);
}
