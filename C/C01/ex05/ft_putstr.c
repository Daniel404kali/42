/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:18:50 by descamil          #+#    #+#             */
/*   Updated: 2023/06/08 10:24:00 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*ptr;

	if (str == NULL)
		return ;
	ptr = str;
	while (*ptr != '\0')
	{
		write (1, ptr, 1);
		ptr++;
	}
}
