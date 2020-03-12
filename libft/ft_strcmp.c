/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:06:09 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/02 16:14:27 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		n;
	int		s1len;
	int		s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	n = (s1len > s2len) ? s1len : s2len;
	return (ft_memcmp(s1, s2, n));
}
