/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 21:25:48 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/02 18:44:50 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*point;

	point = (unsigned char *)s;
	while (n--)
	{
		*point++ = (unsigned char)c;
	}
	return (s);
}
