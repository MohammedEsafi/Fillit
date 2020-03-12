/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 02:11:15 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/05 20:35:35 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int		dlen;

	dlen = ft_strlen(dest);
	ft_memccpy(dest + dlen, src, 0, n);
	n = n > ft_strlen(src) ? (dlen + ft_strlen(src)) : (dlen + n);
	*(dest + n) = '\0';
	return (dest);
}
