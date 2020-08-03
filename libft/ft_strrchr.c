/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamisdra <mamisdra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:28:06 by mamisdra          #+#    #+#             */
/*   Updated: 2019/11/30 17:32:14 by mamisdra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	while (s[i])
		i++;
	while (--i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)(s + i));
		}
	}
	return (NULL);
}
