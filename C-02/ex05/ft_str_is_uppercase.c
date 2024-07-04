/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:35:46 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/03 15:38:49 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{

	char str1[] = "ATTENTION";
	char str2[] = "Attention";
	char str3[] = "";

	printf("test 1: %d\n", ft_str_is_uppercase(str1));
	printf("test 2: %d\n", ft_str_is_uppercase(str2));
	printf("test 3: %d\n", ft_str_is_uppercase(str3));

	return(0);
}*/
