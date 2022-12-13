/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndecotti <ndecotti@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:28:13 by ndecotti          #+#    #+#             */
/*   Updated: 2022/12/13 10:28:13 by ndecotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int (*check_specifier(const char*))(va_list);

/**
 * struct func - struct for specifier to printer
 * @t: character to compare
 * @f: function to handle printing
 */
typedef struct {
	char *t;
	int (*f)(va_list);
} function;

int	ft_putnbr(va_list);
int	ft_putnbr_u(unsigned int);
int	ft_print_u(va_list);
int	ft_print_ptr(va_list);
int	ft_putptr(uintptr_t nb);

/*
int		ft_putnbr(int nbr);
int		ft_putunbr(unsigned int nb);
int		ft_put_ptr(uintptr_t nbr);
int		ft_put_hex(unsigned int nbr, char *chars);

int		ft_print_c(char c);
int		ft_print_s(char *str);
int		ft_print_d(int nbr);
int		ft_print_u(unsigned int nbr);
int		ft_print_p(uintptr_t adr);
int		ft_print_x(unsigned int nbr, int format); 
*/