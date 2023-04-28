/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:23:38 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/04/21 14:49:15 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char	*help;
	size_t	i;

	i = 0;
	help = s;
	if (n == 0)
		return ;
	else
	{
		while (i < n)
		{
			help[i] = '\0';
			i++;
		}
	}
}
