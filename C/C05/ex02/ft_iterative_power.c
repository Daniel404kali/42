/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:26:20 by descamil          #+#    #+#             */
/*   Updated: 2023/06/21 16:33:09 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	if (nb == 0 && power - 1 == 0)
		return (1);
	else if (power - 1 < 0)
		return (0);
	else if (nb < 0)
	{
		nb *= -1;
		while ((power - 1) >= 0)
		{
			nb *= nb;
			power--;
		}
		return (nb);
	}

	while ((power - 1) > 0)
	{
		if (nb > 1)
		{
			nb = nb * nb;
			power--;
		}
		else
			return 0;

	}
	return (nb);
}
