/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:41:27 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/15 18:51:58 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//%c
int	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

//%s
int	ft_putstring(char *str)
{
	if (!str)
		write(1, "(null)", 6);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

//%d,%i
int	ft_putnumber(int i)
{
	ft_putnbr_fd(i, 1);
	return (digit_count(i));
	
}

size_t digit_count(long int n)
{
	int	i;
	
	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i += 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}