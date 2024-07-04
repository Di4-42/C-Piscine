/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dihussai <dihussai@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:39:35 by dihussai          #+#    #+#             */
/*   Updated: 2024/07/04 12:54:14 by dihussai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char str1[] = "Hello World ^^! 73";
	char str2[] = "Hello\nWorld";
	char str3[] = "";

	printf("test 1: %d\n", ft_str_is_printable(str1));
	printf("test 2: %d\n", ft_str_is_printable(str2));
	printf("test 3: %d\n", ft_str_is_printable(str3));
	return(0);
}*/
