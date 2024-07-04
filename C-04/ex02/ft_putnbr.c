/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:34:26 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 14:41:59 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar ('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr (nb / 10);
	}
	ft_putchar ((nb % 10) + '0');
}
/*
int main()
{
    ft_putnbr(42);    // Affiche "42"
    ft_putchar('\n');
    ft_putnbr(-42);   // Affiche "-42"
    ft_putchar('\n');
    ft_putnbr(0);     // Affiche "0"
    ft_putchar('\n');
    ft_putnbr(-2147483648); // Affiche "-2147483648"
    ft_putchar('\n');
    return 0;
}*/
