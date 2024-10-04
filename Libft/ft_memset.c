/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diahussa <diahussa@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:45:39 by diahussa          #+#    #+#             */
/*   Updated: 2024/10/04 11:21:11 by diahussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include "libft.h"*/

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char)b;
	while (i < n)
	{
		str[i] = (unsigned char *)c;
		i++;
	}
	return (b);
}
