/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:57:40 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 19:06:09 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main()
{
	int nombre = 5;
	int puissance = 5;
	int i = ft_recursive_power(nombre, puissance);
	printf("recursive de puissance resultat: %d\n", i);
	return(0);
}*/
