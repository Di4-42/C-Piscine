/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 14:42:46 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 15:04:42 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 +(str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
int main()
{
	char str1[] = " ---+--+1234ab567";
	printf("Input: \"%s\"\n", str1);
	printf("Output: %d\n\n", ft_atoi(str1)); // affiche -1234

	char str2[] = "  +++123";
	printf("Input: \"%s\"\n", str2);
	printf("Output: %d\n\n", ft_atoi(str2)); // affiche 123

	char str3[] = " -42";
	printf("Input: \"%s\"\n", str3);
	printf("Output: %d\n\n", ft_atoi(str3)); // affiche -42

	char str4[] = "\v5678";
	printf("Input: \"%s\"\n", str4);
	printf("Output: %d\n\n", ft_atoi(str4));
}*/
