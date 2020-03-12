/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:43:44 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/15 19:38:50 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;
	size_t	n;

	if (!s || !f)
		return (NULL);
	n = ft_strlen(s);
	p = ft_strnew(n);
	if (!p)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	return (p);
}
