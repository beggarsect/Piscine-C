/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 21:27:09 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/11 23:06:54 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
/*
int	main(void)
{
	int a, b, div, mod;

	a = 10;	
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("division: %d and modulo: %d\n", a, b);
	return (0);
}*/
