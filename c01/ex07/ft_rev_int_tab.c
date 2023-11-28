/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:50:51 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/25 18:50:54 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

// int	main(void)
// {
// 	int	tab[4] = {0, 1, 2, 3};
// 	int	size = 4;

// 	ft_rev_int_tab(tab, size);
// 	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3]);
// }