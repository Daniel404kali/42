/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:06:58 by anmateo-          #+#    #+#             */
/*   Updated: 2023/06/04 21:24:40 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print(int r, int c, int x, int y)
{
	if (r == 0 || r == y - 1 || c == 0 || c == x - 1)
	{
		if (r == 0 && (c == 0 || c == x - 1))
		{
			ft_putchar('A');
		}
		else if (r == y - 1 && (c == 0 || c == x - 1))
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	r;
	int	c;
	int	pos[5];

	r = -1;
	while (r++ < y - 1)
	{
		c = -1;
		while (c++ < x - 1)
		{
			print(r, c, x, y);
		}
		ft_putchar('\n');
	}
}
