/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 17:45:41 by descamil          #+#    #+#             */
/*   Updated: 2023/10/03 18:54:14 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*o1;
	size_t	j;
	size_t	delante;
	size_t	k;
	size_t	detras;

	i = 0;
	delante = 0;
	o1 = (char *)s1;
	k = ft_strlen(o1);
	while (o1[i] =! '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (o1[i] == set[j])
				delante++;
			j++;
		}
		if delante == delante de antes
			sal;
		i++;
	}
	while (k > 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (o1[k] == set[j])
				detras++;
			else
				exit;
			j++;
		}
		k--;
	}

}
