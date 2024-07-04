/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:51:42 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 18:55:47 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	nbr;
	int	p;

	result = 1;
	nbr = nb;
	p = power;
	if (power < 0)
	{
		return (0);
	}
	if (nb == 0 && power == 0)
	{
		return (1);
	}
	while (p != 0)
	{
		result = result * nbr;
		p--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	int r = 5;
	int s = 5;
	printf("resultat du nombre puissance 5: %d\n", ft_iterative_power(r, s));
	return(0);
}*/
