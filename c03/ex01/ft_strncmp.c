/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:50:39 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/13 19:51:27 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	if (i < n && s1[i] == '\0' && s2[i] != '\0')
	{
		return (0 - s2[i]);
	}
	else if (i < n && s1[i] != '\0' && s2[i] == '\0')
	{
		return (s1[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "string";
// 	char	str2[] = "string";

// 	printf("%d\n", ft_strncmp(str1, str2, 2));
// 	printf("%d\n", ft_strncmp("Hello", "He", 1));
// 	printf("%d\n", ft_strncmp("He", "Hello", 1));
// }