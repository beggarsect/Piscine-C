/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:23:28 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/18 18:23:29 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	array = malloc(size * sizeof(int));
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

// int	main(void)
// {
// 	int max;
// 	int	min;

// 	min = -10;
// 	max = 10;
// 	int *array = ft_range(min,max);
// 	int	i;

// 	i = 0;
// 	while (i < max - min)
// 	{
// 		printf("%d ", array[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	free(array);
// 	return(0);
// }
