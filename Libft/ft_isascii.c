/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <diahussa@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:15:16 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/02 19:19:28 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	while (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
include <stdio.h>
int main(void)
{
	int a = 2;
	printf("%d\n", ft_isascii(c));
	return(0);
}*/
