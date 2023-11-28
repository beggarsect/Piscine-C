/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:23:49 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/18 18:23:51 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range[0] = NULL;
		return (0);
	}
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		range[0] = NULL;
		return (-1);
	}
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (size);
}

// int	main(void)
// {
// 	int max;
// 	int	min;
// 	int	*range;

// 	min = 0;
// 	max = 100;
// 	int size = ft_ultimate_range(&range, min, max);
// 	printf("size: %d\n", size);
// 	free(range);
// 	return(0);
// }
