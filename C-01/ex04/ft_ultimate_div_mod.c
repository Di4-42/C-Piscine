/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:20:17 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/02 15:29:23 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t;

	t = *a;
	*a = *a / *b;
	*b = t % *b;
}
/*
#include <stdio.h>
int main()
{
	int d = 47;
	int h = 5;
	ft_ultimate_div_mod(&d, &h);
	printf("Resultat de la division: %d\n", d);
	printf("Restes de la division: %d\n", h);
	return(0);
}*/
