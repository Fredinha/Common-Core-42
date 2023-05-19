/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:54:13 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/05/19 14:28:00 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_printf.h"

int	what_is_this(va_list args, char c)
{
	if (c == 'c')
		return (function_c(va_arg(args, int)));
	if (c == 's')
		return (function_s(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (function_d_i(va_arg(args, int)));
	if (c == 'u')
		return (function_u(va_arg(args, unsigned int)));
	if (c == 'p')
		return (function_p(va_arg(args, unsigned long long)));
	if (c == 'x')
		return (function_x(va_arg(args, unsigned int)));
	if (c == 'X')
		return (function_bigx(va_arg(args, unsigned int)));
	if (c == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		i;
	int		return_value;

	i = 0;
	return_value = 0;
	va_start(args, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			return_value = return_value + what_is_this(args, string[i]);
		}
		else
		{
			ft_putchar_fd((char) string[i], 1);
			return_value++;
		}
		i++;
	}
	va_end(args);
	return (return_value);
}
