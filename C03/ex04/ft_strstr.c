/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:16:23 by ekarabud          #+#    #+#             */
/*   Updated: 2023/09/19 16:31:01 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_srtlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	str_i;
	int	find_i;

	str_i = 0;
	find_i = ft_srtlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	while (str[str_i])
	{
		find_i = 0;
		while (str[str_i + find_i] == to_find[find_i])
		{
			if (to_find[find_i + 1] == '\0')
				return (&str[str_i]);
			find_i++;
		}
		str_i++;
	}
	return (0);
}
