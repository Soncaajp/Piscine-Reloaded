/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:13:56 by rhulk             #+#    #+#             */
/*   Updated: 2019/04/02 19:47:13 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_len(int min, int max)
{
	int i;

	i = 0;
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	if (min >= max)
		return (0);
	i = 0;
	arr = (int*)(malloc(sizeof(int) * count_len(min, max)));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
