/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomes-f <fgomes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:40:06 by fgomes-f          #+#    #+#             */
/*   Updated: 2023/05/19 13:15:25 by fgomes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *string, ...);
int	function_c(char c);
int	function_s(char *str);
int	function_d_i(int number);
int	function_u(unsigned int number);
int	function_x(unsigned int number);
int	function_bigx(unsigned int number);
int	function_p(unsigned long long number);

#endif
