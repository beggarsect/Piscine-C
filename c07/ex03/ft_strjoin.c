/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:24:07 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/18 18:24:11 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_total_length(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += size * ft_strlen(sep);
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;
	int		total_length;

	i = 0;
	total_length = ft_total_length(size, strs, sep);
	if (size == 0 || sep == NULL)
	{
		string = malloc(sizeof(char));
		return (string);
	}
	string = malloc(total_length * sizeof(char));
	string[0] = '\0';
	while (i < size)
	{
		if (strs[i] != NULL)
		{
			ft_strcat(string, strs[i]);
			if (i < (size - 1))
				ft_strcat(string, sep);
		}
		i++;
	}
	return (string);
}

// int	main(void)
// {
// 	char 	**str;
// 	char	*sep;
// 	int		size;

// 	str = malloc(3 * sizeof(char *));
// 	str[0] = "Wasap";
// 	str[1] = "42";
// 	str[2] = "Prague!";
// 	size = 3;
// 	sep = "$";
// 	printf("%s", ft_strjoin(size, str, sep));
// }
