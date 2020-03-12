/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_tetriminos.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <kkhabour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 20:03:40 by mesafi            #+#    #+#             */
/*   Updated: 2019/07/04 22:22:07 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	count_connection(char *tetrimino, int index)
{
	int		count;

	count = 0;
	if (index < 19 && tetrimino[index + 1] == '#')
		count++;
	if (index < 15 && tetrimino[index + 5] == '#')
		count++;
	return (count);
}

static int	is_valid(char *tetrimino, t_list **root, int index)
{
	int			connection;
	int			i;
	int			hash;
	t_tetris	*block;

	hash = 0;
	connection = 0;
	i = -1;
	if (!(block = (t_tetris *)malloc(sizeof(t_tetris))))
		return (-1);
	block->id = 64 + index;
	while (++i < TETRIS_SIZE - 1)
		if (((tetrimino[i] != '.' && tetrimino[i] != '#') &&
		(i % 5 != 4 || tetrimino[i] != '\n')) || hash > 4)
			return (-1);
		else if (tetrimino[i] == '#')
		{
			block->x[hash] = i % 5;
			block->y[hash++] = i / 5;
			connection += count_connection(tetrimino, i);
		}
	ft_lstpush(root, ft_lstnew(block, sizeof(t_tetris)));
	ft_memdel((void **)&block);
	return ((connection != 3 && connection != 4) ? -1 : 1);
}

int			read_tetriminos(int fd, t_list **root)
{
	int		rd;
	char	buff[TETRIS_SIZE + 1];
	int		count;

	count = 0;
	while ((rd = read(fd, buff, TETRIS_SIZE)) > 0)
	{
		buff[rd] = '\0';
		if (rd < 20 || (++count > 26) ||
		(rd == TETRIS_SIZE && buff[20] != '\n') ||
		(is_valid(buff, root, count) < 0))
			return (-1);
		if (rd == 20)
			break ;
	}
	if (rd != 20)
		return (-1);
	return (count);
}
