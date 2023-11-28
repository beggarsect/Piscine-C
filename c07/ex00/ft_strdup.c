/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:23:05 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/18 18:23:11 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *new_string, char *src)
{
	int	s;

	s = 0;
	while (src[s] != '\0')
	{
		new_string[s] = src[s];
		s++;
	}
	new_string[s] = '\0';
	return (new_string);
}

char	*ft_strdup(char *src)
{
	int		length;
	char	*new_string;

	length = 1 + ft_strlen(src);
	new_string = malloc(length * sizeof(char));
	if (new_string != NULL)
	{
		return (ft_strcpy(new_string, src));
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str = ft_strdup("Ahoj 42");
// 	printf("%s", str);
// 	free(str);
// }