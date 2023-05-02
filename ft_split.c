/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 15:11:46 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/05/02 17:53:42 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			j++;
		while (s[i] && s[i] != c)
			i++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (j);
}

size_t	ft_count_letters(char const *s, char c, size_t j)
{
	size_t	x;
	size_t	i;
	size_t	y;

	x = 0;
	i = 0;
	while (s[i] && s[i] == c)
                i++;
        while (s[i] && x != j)
        {
                if (s[i] != c)
                        x++;
                while (s[i] && s[i] != c)
                        i++;
                while (s[i] && s[i] == c)
                        i++;
	}
	x = 0;
	y = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		y++;
	}
	return (y);
}


char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**array_of_strings;
	size_t	j;
	size_t	x;
	size_t	number_of_words;

	i = 0;
	x = 0;
	number_of_words = ft_count_words(s, c);
	array_of_strings = malloc(sizeof(char*) * number_of_words);
	if (!array_of_strings)
		return (NULL);
	while (i <= number_of_words)
	{
		array_of_strings[i] = malloc(sizeof(char) * (ft_count_letters(s, c, i) + 1));	
		printf("%zu\n", ft_count_letters(s, c, i));
		i++;
	}
	if (!array_of_strings[i])
		return (NULL);
	i = 0;
	j = 0;
	while (i <= number_of_words)
	{
		j = 0;
		while (s[x] && s[x] == c)
			x++;
		while (s[x] && s[x] != c)
		{
			array_of_strings[i][j] = s[x];
			x++;
			j++;
		}
		array_of_strings[i][j] = '\0';
	i++;
	}
//	array_of_strings[number_of_words] = '\0';
	return (array_of_strings);
}

int	main(void)
{
	size_t	i;
	char	*s1;
	char	c;
	char	**test;

	c = ' ';
	s1 = "array b carro";
	test = ft_split(s1, c);
	i = 0;
	printf("%s\n", test[i]);
	while (i <= ft_count_words(s1, c))
	{
		printf("%s\n", test[i]);
		i++;
	}
}
