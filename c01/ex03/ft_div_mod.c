/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:57:10 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/11 22:31:28 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int a, b, div_result, mod_result;
	
	a = 10;
	b = 3;
	ft_div_mod(a, b, &div_result, &mod_result);
	printf("%d divided by %d is %d\n", a, b, div_result);
	printf("%d modulo by %d is %d\n", a, b, mod_result);
}*/
