/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 21:58:26 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/04 00:05:35 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n--)
	{
		*(unsigned char*)dest = *(unsigned char*)src;
		if (dest++ && (*(unsigned char*)src++ == (unsigned char)c))
			return (dest);
	}
	return (NULL);
}
