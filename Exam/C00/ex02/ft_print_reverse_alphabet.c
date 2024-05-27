/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:30:02 by descamil          #+#    #+#             */
/*   Updated: 2023/06/22 16:34:57 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start;
	
	start = 'z';
	while (start >= 'a')
	{
		write(1, &start, 1);
		start--;
	}
}

int	main()
{
	ft_print_reverse_alphabet();
	return (0);
}
