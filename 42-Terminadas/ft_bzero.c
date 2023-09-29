/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:23:46 by descamil          #+#    #+#             */
/*   Updated: 2023/09/21 19:23:18 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*s1;
	size_t	i;

	s1 = (char *)s;
	i = 0;
	while (i < n)
	{
		s1[i] = '\0';
		i++;
	}
}
/*
int	main()
{
	size_t n;
	char text[] = "La fr4se";

	n = 4;
	ft_bzero (text, n);
	printf("%s \n", text);
	return (0);
}
*/
