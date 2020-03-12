/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:51:07 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/16 15:37:56 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstpop(t_list *head)
{
	t_list	*tmp;
	t_list	*prev;

	if (head == NULL)
		return ;
	tmp = head;
	prev = tmp;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	prev->next = NULL;
	free(tmp);
}
