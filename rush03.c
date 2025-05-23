/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasukmua <vasukmua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 04:08:06 by vasukmua          #+#    #+#             */
/*   Updated: 2025/05/24 05:02:58 by vasukmua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	check(int x, int y, int row, int col)
{
	if ((col == 1 && row == 1) || (col == 1 && row == y))
	{
		write(1, "A", 1);
	}
	else if ((col == x && row == 1) || (col == x && row == y))
	{
		write(1, "C", 1);
	}
	else if ((col == 1 || col == x) || (row == 1 || row == y))
	{
		write(1, "B", 1);
	}
	else
	{
		write(1, " ", 1);
	}
}

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			check(x, y, row, col);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}

}

int	main(void)
{
	rush(5, 3);
	rush(5, 1);
	rush(1, 1);
	rush(1, 5);
	rush(4, 4);
	return (0);
}