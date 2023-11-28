/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:42:00 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/13 19:28:04 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main()
// {
// 	char	str1[] = "string";
// 	char	str2[] = "string";

// 	printf("%d\n", ft_strcmp(str1, str2));
// 	printf("%d\n", ft_strcmp("Hello", "He"));
// 	printf("%d\n", ft_strcmp("He", "Hello"));
// }
