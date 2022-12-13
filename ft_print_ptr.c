/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:24:32 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/13 10:24:32 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_ptr(va_list)
{
	uintptr_t *ptr;
	int		count;

	count = 0;
	count += ft_print_str("0x");
	ptr = va_arg(args, uintptr_t);
	count += ft_putptr(ptr);

	if (count < 0)
		return (-1);
	else
		return (count);
}