/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:48:22 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/17 15:46:12 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <limits.h>
# include <stdarg.h>
# include <unistd.h>

void	ft_putchar(char c, int *len);

void	ft_putstring(char *str, int *len);

void	ft_putint(int n, int *len);

void	ft_putuns(unsigned int n, int *len);

void	ft_puthadress(unsigned long n, int *len);

void	ft_puthexa(unsigned long n, int *len);

void	format_check(char c, va_list *args, int *len, int *i);

int		ft_printf(const char *format, ...);
#endif