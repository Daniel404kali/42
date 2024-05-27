/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:26:35 by descamil          #+#    #+#             */
/*   Updated: 2023/10/13 14:34:36 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
/*
int main ()
{
	int c;

	c = 'A';
	if (ft_isalnum (c) == 1)
	{
		printf("1 \n");
	}
	return (0);
}
*/
