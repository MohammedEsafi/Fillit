/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <kkhabour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 21:10:08 by kkhabour          #+#    #+#             */
/*   Updated: 2019/07/01 20:26:07 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fillit.h"

int		main(int argc, char **argv)
{
	t_list	*root;
	int		side;
	int		fd;

	root = NULL;
	if (argc != 2)
		exit_program(EXIT_FAILURE, "usage: ./fillit file");
	if ((fd = open(argv[1], O_RDONLY)) < 0)
		exit_program(EXIT_FAILURE, "error");
	side = ft_sqrt(read_tetriminos(fd, &root) * 4);
	if (side == -1)
	{
		ft_lstdel(&root, ft_del);
		exit_program(EXIT_FAILURE, "error");
	}
	solve(side, root);
	ft_lstdel(&root, ft_del);
	close(fd);
	return (0);
}
