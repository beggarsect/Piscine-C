/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:13:27 by hienguye          #+#    #+#             */
/*   Updated: 2023/09/26 10:13:31 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	check_sep(char character, char *separator)
{
	int	i;

	i = 0;
	while (separator[i] != '\0')
	{
		if (character == separator[i])
			return (1);
		i++;
	}
	return (0);
}

static int	substring_count(char *s, char *separator)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && check_sep(s[i], separator))
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && !check_sep(s[i], separator))
			i++;
	}
	return (count);
}

static int	substring_len(char *s, char *separator)
{
	int	i;

	i = 0;
	while (s[i] && !check_sep(s[i], separator))
		i++;
	return (i);
}

static char	*substring(char *s, char *separator)
{
	int		i;
	char	*substring;
	int		len;

	i = 0;
	len = substring_len(s, separator);
	substring = malloc((len + 1) * sizeof(char));
	while (i < len)
	{
		substring[i] = s[i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}

char	**ft_split(char const *s, char *c)
{
	int		i;
	char	**strings;

	i = 0;
	strings = malloc(substring_count(s, c) * sizeof(char *));
	while (*s != '\0')
	{
		while (*s != '\0' && check_sep(*s, c))
			s++;
		if (*s != '\0')
		{
			strings[i] = substring(s, c);
			i++;
		}
		while (*s && !check_sep(*s, c))
			s++;
	}
	strings[i] = 0;
	return (strings);
}

int	main(void)
{
	int		i;
	char	**split;

	i = 0;
	split = ft_split("cao je diamantovy hrac well thats crazy", " ");
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	printf("check sep: %d\nsub count: %d", check_sep('a', "sa"), substring_count("cao je diamantovy hrac well thats crazy", "aozyvmc "));
}

// int	main(int argc, char *argv[])
// {
// 	(void)	argc;
// 	int		i;
// 	char	**split;

// 	i = 0;
// 	split = ft_split(argv[1], argv[2]);
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }
