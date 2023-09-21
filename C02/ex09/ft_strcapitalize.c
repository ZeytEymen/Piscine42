/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 15:03:20 by ekarabud          #+#    #+#             */
/*   Updated: 2023/09/17 20:57:42 by ekarabud         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	check_alpha_numeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'))
		return (1);
	else
		return (0);
}

int	check_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	check_uppercase(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_alpha_numeric(str[i]))
		{
			if (check_lowercase(str[i]) && !check_alpha_numeric(str[i - 1]))
			{
				str[i] = str[i] - 32;
			}
			else if (check_uppercase(str[i]) && check_alpha_numeric(str[i - 1]))
			{
				str[i] = str[i] + 32;
			}
		}
		i++;
	}
	return (str);
}
