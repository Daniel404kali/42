/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:45:02 by descamil          #+#    #+#             */
/*   Updated: 2023/06/22 11:19:11 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	n = argc - 1;
	if (argc > 1)
	{
		while (n > 0)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				write (1, &argv[n][i], 1);
				i++;
			}
			write (1, "\n", 1);
			n--;
		}
	}
	return (0);
}
