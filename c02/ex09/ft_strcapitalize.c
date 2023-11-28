/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:34:47 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/13 17:37:32 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	y;

	i = 0;
	y = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (y == 1)
			{
				str[i] -= 32;
				y = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			y = 0;
		else
			y = 1;
		i++;
	}
	return (str);
}

// int main(void)
// {
//     char    str[] = "salut, comment tu vas ?"; 
// 	char str2[] = "42mots quarante-deux; cinquante+et+un";
//     printf("%s", ft_strcapitalize(str));
// 	printf(" %s\n", ft_strcapitalize(str2));
// }