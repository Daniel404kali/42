/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:35:47 by descamil          #+#    #+#             */
/*   Updated: 2023/06/22 16:37:52 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	start;

	start = '0';
	while (start <= '9')
	{
		write (1, &start, 1);
		start++;
	}
}

int main()
{
	ft_print_numbers();
	return (0);
}
