/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:25:54 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/13 10:25:54 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(va_list)
{
	int	count;
	int nb;

	/*fetch nb from variadic parameters */
	nb = va_arg(args, int);
	count = 0;
	if (nb == -2147483648)
	{
		count += ft_print_str("-2147483648");
		break;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		count += 1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb % 10);
		ft_putnbr(nb / 10);
	}
	else
		count += ft_print_c(nb + 48); // écrit les remainders dans l'ordre drécroissant car le programme remonte la recursivité
	return (count);
}