/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:21:21 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/04/27 16:39:46 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*string;

	i = 0;
	x = 0;
	j = 0;
	if (!set || !*set)
		return (ft_strdup(s1));
	if (!set)
		return (ft_strdup(""));
	if (!s1)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (set[j] != '\0')
	{
		j = 0;
		while (s1[i] != set[j] && set[j] != '\0')
			j++;
		i++;
	}
	i--;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	j = 0;
	i--;
	x = ft_strlen(s1) - 1;
	while (set[j] != '\0')
	{
		j = 0;
		while (s1[x] != set[j] && set[j] != '\0')
			j++;
		x--;
	}
	x++;
	string = malloc(sizeof(char) * (x - i) + 1);
	if (!string)
		return (NULL);
	j = 0;
	i++;
	while (x >= i)
	{
		string[j] = s1[i];
		j++;
		i++;
	}
	string[j] = '\0';
	return (string);
}
