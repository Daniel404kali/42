/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:06:58 by anmateo-          #+#    #+#             */
/*   Updated: 2023/06/04 20:37:33 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	put_border_chars(char c_first, char c_last, int inverted)
{
	if (inverted == 0)
	{
		ft_putchar(c_last);
	}
	else
	{
		ft_putchar(c_first);
	}
}

void	put_row_characters(char c_first, char c_last, char c_col, int pos[])
{
	int	inverted;

	inverted = pos[4];
	if (pos[0] == 0)
	{
		put_border_chars(c_first, c_last, inverted);
	}
	else if (pos[0] == pos[2])
	{
		put_border_chars(c_last, c_first, inverted);
	}
	else
	{
		ft_putchar(c_col);
	}
}

void	put_col_characters(int pos[])
{
	char	c_first;
	char	c_last;
	char	c_col;
	char	c_row;

	c_first = '/';
	c_last = '\\';
	c_col = '*';
	c_row = '*';
	pos[4] = 1;
	if (pos[1] == 0)
	{
		put_row_characters(c_first, c_last, c_col, pos);
	}
	else if (pos[1] == pos[3])
	{
		put_row_characters(c_last, c_first, c_col, pos);
	}
	else
	{
		ft_putchar(c_row);
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
			if (r == 0 || r == y - 1 || c == 0 || c == x - 1)
			{
				pos[0] = r;
				pos[1] = c;
				pos[2] = y - 1;
				pos[3] = x - 1;
				put_col_characters(pos);
			}
			else
			{
				ft_putchar(' ');
			}
		}
		ft_putchar('\n');
	}
}
