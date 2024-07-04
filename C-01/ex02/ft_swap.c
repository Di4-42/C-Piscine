/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 14:48:17 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/02 15:06:15 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tp;

	tp = *a;
	*a = *b;
	*b = tp;
}
/*
#include <stdio.h>
int main()
{
	int x1 = 21;
	int x2 = 79;
	printf("Avant swap:\na:%d b:%d\n", x1, x2);
	ft_swap(&x1, &x2);
	printf("Après swap:\na:%d b:%d\n", x1, x2);
	return(0);
}
*/
