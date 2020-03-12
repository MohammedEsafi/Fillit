/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetrimino.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <kkhabour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 20:18:45 by kkhabour          #+#    #+#             */
/*   Updated: 2019/07/01 21:53:14 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	remove_tetrimino(int side, char board[side][side], t_tetris *data)
{
	int i;
	int x;
	int y;

	i = 0;
	while (i < 4)
	{
		x = data->x[i];
		y = data->y[i];
		board[y][x] = '.';
		i++;
	}
}

void	put_tetrimino(t_tetris *data, int side, char board[side][side],
		int coordinates[2])
{
	int xx;
	int yy;
	int x;
	int y;
	int i;

	i = 0;
	x = coordinates[0];
	y = coordinates[1];
	xx = x - data->x[0];
	yy = y - data->y[0];
	while (i < 4)
	{
		x = xx + data->x[i];
		y = yy + data->y[i];
		data->x[i] = x;
		data->y[i] = y;
		board[y][x] = data->id;
		i++;
	}
}

int		is_safe(t_tetris *data, int side, char board[side][side],
		int coordinates[2])
{
	int m_x;
	int	m_y;
	int x;
	int y;
	int i;

	x = coordinates[0];
	y = coordinates[1];
	m_x = x - data->x[0];
	m_y = y - data->y[0];
	i = 3;
	while (i >= 0)
	{
		x = m_x + data->x[i];
		y = m_y + data->y[i];
		if (x >= side || x < 0 || y >= side || y < 0)
			return (-1);
		if (board[y][x] != '.')
			return (-1);
		i--;
	}
	return (1);
}
