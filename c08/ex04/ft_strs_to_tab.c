/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:01:33 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/25 12:01:36 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *new_string, char *src)
{
	int	s;

	s = 0;
	while (src[s] != '\0')
	{
		new_string[s] = src[s];
		s++;
	}
	new_string[s] = '\0';
	return (new_string);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*new_string;

	length = 1 + ft_strlen(src);
	new_string = malloc(length * sizeof(char));
	if (new_string != NULL)
	{
		return (ft_strcpy(new_string, src));
	}
	return (0);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	i = 0;
	result = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	result[i].copy = 0;
	return (result);
}

// int	main(int ac, char **av)
// {
// 	int	i;

// 	i = 0;
// 	t_stock_str *result = ft_strs_to_tab(ac, av);
// 	while (i < ac)
// 	{
// 		printf("%d, %s\n", result[i].size, result[i].str);
// 		i++;
// 	}
// }
