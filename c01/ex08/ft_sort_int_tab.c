/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:51:09 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/25 18:51:12 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	temp;

	i = 0;
	while (i < size)
	{
		y = 0;
		while (y < size - 1 - i)
		{
			if (tab[y] > tab[y + 1])
			{
				temp = tab[y];
				tab[y] = tab[y + 1];
				tab[y + 1] = temp;
			}
			y++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[4] = {9, 5, 0, 7};
// 	int	size = 4;

// 	ft_sort_int_tab(tab, size);
// 	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
// }
