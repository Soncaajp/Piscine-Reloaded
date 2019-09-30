/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:30:51 by rhulk             #+#    #+#             */
/*   Updated: 2019/04/05 15:04:36 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc != 1)
	{
		i = 1;
		while (argc != 1)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
			argc--;
		}
	}
	return (0);
}
