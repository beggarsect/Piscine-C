/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:21:41 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/14 10:21:42 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	int				y;
	unsigned int	x;

	i = 0;
	y = 0;
	x = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[y] != '\0' && x < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	str1[60] = "42 ";
// 	char	str2[] = "Prague!";
// 	printf("%s\n", ft_strncat(str1, str2, 4));
// }