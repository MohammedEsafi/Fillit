/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 21:20:04 by kkhabour          #+#    #+#             */
/*   Updated: 2019/07/01 21:53:01 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static	int		solving(t_list *root, int side, char board[side][side])
{
	int		y;
	int		x;
	int		index[2];

	y = -1;
	while (++y < side)
	{
		x = 0;
		while (x < side)
		{
			index[0] = x;
			index[1] = y;
			if (is_safe((t_tetris *)(root->content), side, board, index) == 1)
			{
				put_tetrimino((t_tetris *)(root->content), side, board, index);
				if (root->next == NULL)
					return (1);
				if (solving(root->next, side, board) == 1)
					return (1);
				remove_tetrimino(side, board, (t_tetris *)(root->content));
			}
			x++;
		}
	}
	return (0);
}

void			solve(int side, t_list *root)
{
	char	board[side][side];

	setdot(side, board);
	if (solving(root, side, board) == FALSE)
		solve(side + 1, root);
	else
		print_board(side, board);
}
