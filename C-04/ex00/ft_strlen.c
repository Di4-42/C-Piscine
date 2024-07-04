/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:14:50 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 14:22:56 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main()
{
	char S[] = "Hello World"; // 11
	int n = ft_strlen(S);
	printf("Nombre de caractère compté dans la str: %d\n", n);
	return(0);
}*/
