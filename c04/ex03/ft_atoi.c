/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:59:34 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/22 09:59:36 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_num(char n)
{
	if (n >= '0' && n <= '9')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	result;

	i = 0;
	minus = 0;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			minus++;
		}
		i++;
	}
	if (minus % 2 == 0)
		minus = 1;
	else 
		minus = -1;
	while (ft_is_num(str[i]))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * minus);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi("     +-+--+---+-1234a1bc456"));
// }
