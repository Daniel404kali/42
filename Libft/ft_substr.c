/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:34:35 by descamil          #+#    #+#             */
/*   Updated: 2023/10/09 17:43:06 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s == NULL || ft_strlen(s) <= start || len == 0)
	{
		sub = malloc(1);
		if (sub == NULL)
			return (NULL);
		*sub = '\0';
		return (sub);
	}
	else if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
int main()
{
	char const *s = "La frase";
	unsigned int start = 5;
	size_t len = ft_strlen(s);
	char *ptr = ft_substr(s, start, len);
	
	printf("Uso de substr: %s\n", ptr);
	return (0);
}
*/