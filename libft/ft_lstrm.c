/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:58:19 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/16 15:39:54 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstrm(t_list **head)
{
	t_list	*tmp;

	if (head == NULL || *head == NULL)
		return ;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}
