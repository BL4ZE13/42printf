/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diomarti <diomarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:41:27 by diomarti          #+#    #+#             */
/*   Updated: 2022/11/16 13:14:03 by diomarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//%c
void	ft_putchar(char c, int *len)
{
	ft_putchar_fd(c, 1);
	(*len)++;
}

//%s
void	ft_putstring(char *str, int *len)
{
	if (!str)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	ft_putstr_fd(str, 1);
	(*len) += ft_strlen(str);
}
