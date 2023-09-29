/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:44:55 by descamil          #+#    #+#             */
/*   Updated: 2023/09/28 11:38:48 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(char *c)
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;
	size_t	total;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen((char *) src);
	total = lendst + lensrc;
	if (size == 0)
		return (lensrc);
	if (lendst >= size)
		return (size + lensrc);
	while (lendst < size - 1 && lensrc > 0)
	{
		dst[lendst] = src[i];
		lendst++;
		lensrc--;
		i++;
	}
	dst[lendst] = '\0';
	return (total);
}

/*
int main()
{
	char dst[] = "fghijklmn ";
	const char src[] = "abcde";
	size_t size = 1;
	size_t result = ft_strlcat(dst, src, size);
	printf("%zu\n", result);
	printf("%s\n", dst);	
	size_t result2 = strlcat(dst, src, size);
	printf("%zu\n", result2);
	printf("%s\n", dst);
	return (0);
}
*/
