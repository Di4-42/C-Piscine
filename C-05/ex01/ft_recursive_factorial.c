/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:49:21 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 18:50:56 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main()
{
	int CACANBR = 5;
	int result = ft_recursive_factorial(CACANBR);
	printf("resultat de recursive factoriel: %d\n", result);
	return(0);
}*/
