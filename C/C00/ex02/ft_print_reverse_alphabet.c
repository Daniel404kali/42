/* ************************************************************************** */
/*                                                                            */
/*                                                        :::     :+:::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:37:31 by descamil          #+#    #+#             */
/*   Updated: 2023/06/07 12:03:47 by descamil         ###   ########.fr       */
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
