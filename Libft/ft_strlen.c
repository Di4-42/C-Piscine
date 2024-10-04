/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <diahussa@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:29:25 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/02 19:37:44 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
include "libft.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char s[] = "Hello";
	printf("%d\n", ft_strlen(s));
	return(0);
}*/
