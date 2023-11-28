/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:28:37 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/11 22:24:46 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	printf("before: %d, %d\n", x, y);
	ft_swap(&x, &y);
	printf("after: %d, %d\n", x, y);
	return (0);
}*/
