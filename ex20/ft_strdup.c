/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:12:00 by rhulk             #+#    #+#             */
/*   Updated: 2019/04/07 14:52:25 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int kol;

	kol = 0;
	while (*s != '\0')
	{
		kol++;
		s++;
	}
	return (kol);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	if (!(char*)malloc(sizeof(char) * (ft_strlen(src) + 1)))
		return (0);
	str = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i++] = '\0';
	return (str);
}
