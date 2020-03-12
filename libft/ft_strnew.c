/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:17:25 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/15 19:32:39 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*new;

	new = NULL;
	new = (char *)malloc(size + 1);
	if (!new)
		return (NULL);
	ft_bzero(new, size + 1);
	return (new);
}
