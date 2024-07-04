/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:45:26 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 18:48:20 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = nb;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (i > 1)
	{
		result = result * i;
		i--;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	int nbr = 5;
	printf("resultat du facteur de nbr: %d\n", ft_iterative_factorial(nbr));
	return(0);
}*/
