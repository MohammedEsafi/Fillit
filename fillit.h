/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <kkhabour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 21:05:29 by kkhabour          #+#    #+#             */
/*   Updated: 2019/07/01 20:30:11 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "./libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# define TETRIS_SIZE 21
# define TRUE 1
# define FALSE 0

typedef struct	s_tetris
{
	char		id;
	int			x[4];
	int			y[4];
}				t_tetris;

int				read_tetriminos(int fd, t_list **root);
int				ft_sqrt(int nb);
void			solve(int side, t_list *root);
void			print_board(int side, char board[side][side]);
void			setdot(int side, char board[side][side]);
void			remove_tetrimino(int side, char board[side][side],
				t_tetris *data);
void			put_tetrimino(t_tetris *data, int side,
				char board[side][side], int coordinates[2]);
int				is_safe(t_tetris *data, int side, char board[side][side],
				int coordinates[2]);

#endif
