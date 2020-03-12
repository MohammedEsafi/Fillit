/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 19:49:41 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/16 15:38:41 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush(t_list **head, t_list *new)
{
	t_list *root;

	root = *head;
	if (*head == NULL)
	{
		*head = new;
		return ;
	}
	while (root->next)
		root = root->next;
	root->next = new;
}
