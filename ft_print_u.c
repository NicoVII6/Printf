/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:23:58 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/13 10:23:58 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_u(va_list)
{
	unsigned int	nb;

	/*fetch nb from variadic parameters */
	nb = va_arg(args, unsigned int);
	return (ft_putnbr_u(nb));
}