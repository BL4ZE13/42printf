/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:48:22 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/16 14:08:44 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdio.h>
# include <limits.h>
# include <stdarg.h>

void	ft_putchar(char c, int *len);

void	ft_putstring(char *str, int *len);

void	ft_putnumber(int n, int *len);

void	ft_putuns(unsigned int n, int *len);

#endif