/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:50:20 by descamil          #+#    #+#             */
/*   Updated: 2023/10/07 11:56:48 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_min(void)
{
	char	*arr;

	arr = (char *)malloc(12);
	if (arr == NULL)
		return (NULL);
	ft_strlcpy(arr, "-2147483648", 12);
	return (arr);
}

char	*ft_ifzero(void)
{
	char	*arr;

	arr = (char *)malloc(2);
	if (arr == NULL)
		return (NULL);
	ft_strlcpy(arr, "0", 2);
	return (arr);
}

char	*ft_memory(int len, int sign, int n)
{
	char	*arr;
	char	*ptr;

	arr = (char *)malloc(len + 1);
	if (arr == NULL)
		return (NULL);
	ptr = arr + len;
	*ptr-- = '\0';
	while (n > 0)
	{
		*ptr-- = (n % 10) + '0';
		n /= 10;
	}
	if (sign == -1)
		*ptr = '-';
	ptr++;
	return (arr);
}

char	*ft_itoa(int n)
{
	int	sign;
	int	len;
	int	temp;

	sign = 1;
	len = 0;
	if (n < 0)
	{
		sign = -1;
		n = -n;
		len++;
		if (n == -2147483648)
			return (ft_min());
	}
	if (n == 0)
		return (ft_ifzero());
	temp = n;
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	return (ft_memory(len, sign, n));
}
/*
int main()
{
	int	n = 18512;
	char	*arr = ft_itoa(n);

	if (arr == NULL)
		return (0);
	printf("Numero: %s.\n", arr);
	free(arr);
	return (0);
}
*/
