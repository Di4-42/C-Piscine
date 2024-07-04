/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:07:49 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/02 15:16:21 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int x = 26;
	int y = 5;
	int d;
	int m;
	ft_div_mod(x, y, &d, &m);
	printf("result de la div x & y: %d\n", d);
	printf("reste de la div x & y: %d\n", m);
	return(0);
}*/
