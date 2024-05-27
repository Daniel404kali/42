/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 11:34:28 by descamil          #+#    #+#             */
/*   Updated: 2023/06/22 11:18:54 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	n = 1;
	if (argc > 1)
	{
		while (n < argc)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				write(1, &argv[n][i], 1);
				i++;
			}
			write(1, "\n", 1);
			n++;
		}
	}
	return (0);
}
