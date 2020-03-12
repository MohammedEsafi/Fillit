/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:17:38 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/02 20:46:02 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	char	*pkey;
	char	*s;
	size_t	nlen;

	nlen = ft_strlen(needle);
	s = (char *)str;
	if (!(*needle))
		return ((char *)str);
	while (*str)
	{
		pkey = ft_memchr(str, *needle, ft_strlen(str));
		if (!(pkey))
			return (0);
		if (ft_memcmp(needle, pkey, nlen) == 0)
			if (pkey + nlen <= s + len)
				return (pkey);
		str = pkey + 1;
	}
	return (0);
}
