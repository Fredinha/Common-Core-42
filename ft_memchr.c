/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:32:30 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/04/24 16:42:38 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_copy;
	size_t				i;

	i = 0;
	s_copy = (const unsigned char *) s;
	while (i < n)
	{
		if (s_copy[i] == (unsigned char) c)
			return ((void *)(s_copy + i));
		i++;
	}
	return (NULL);
}
