/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:24:49 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/13 10:24:49 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprint.h"

int	ft_putnbr_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		ft_putnbr_u(nb % 10);
		ft_putnbr_u(nb / 10);
	}
	else
		count += ft_print_c(nb + 48); // écrit les remainders dans l'ordre drécroissant car le programme remonte la recursivité
	return (count);
}