/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 15:59:20 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/04 00:04:15 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*sdup;

	len = ft_strlen(s1);
	sdup = (char *)malloc((len + 1) * sizeof(char));
	if (!sdup)
		return (NULL);
	ft_memcpy(sdup, s1, (len + 1));
	return (sdup);
}
