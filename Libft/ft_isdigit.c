/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:21:32 by dihussai          #+#    #+#             */
/*   Updated: 2024/10/02 19:12:18 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)

{
	while (c >= 0 && c <= 9)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	int c = 9;
	printf("%d\n", ft_isdigit(c));
	return(0);
}*/
