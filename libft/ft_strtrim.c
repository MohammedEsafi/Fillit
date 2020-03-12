/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mesafi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 23:30:43 by mesafi            #+#    #+#             */
/*   Updated: 2019/04/06 00:13:21 by mesafi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i] != '\0')
		i++;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j] != '\0')
		j--;
	if (j <= i)
		return (ft_strdup(""));
	return (ft_strsub(s, i, j - i + 1));
}
