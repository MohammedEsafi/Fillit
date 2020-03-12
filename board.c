/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <kkhabour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 20:15:41 by kkhabour          #+#    #+#             */
/*   Updated: 2019/07/01 21:53:25 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_board(int side, char board[side][side])
{
	int		i;
	int		j;

	i = -1;
	while (++i < side)
	{
		j = -1;
		while (++j < side)
			ft_putchar(board[i][j]);
		ft_putchar('\n');
	}
}

void	setdot(int side, char board[side][side])
{
	int		i;
	int		j;

	i = -1;
	while (++i < side)
	{
		j = -1;
		while (++j < side)
			board[i][j] = '.';
	}
}

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 0)
		return (-1);
	while (++i < nb)
		if (i * i == nb || (i + 1) * (i + 1) > nb)
			break ;
	return (i);
}
