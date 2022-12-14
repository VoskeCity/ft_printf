/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chartostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeloyan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:15:54 by aeloyan           #+#    #+#             */
/*   Updated: 2022/07/02 15:50:00 by aeloyan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pr_char(char c, void (*f)(char, int), t_struct *my_var, int fd)
{
	f(c, fd);
	(*my_var).count++;
}
