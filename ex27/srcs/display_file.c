/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 14:24:46 by rhulk             #+#    #+#             */
/*   Updated: 2019/04/11 18:38:30 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 4096

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	display_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd != -1)
	{
		ret = 1;
		while (ret > 0)
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		display_file(argv[1]);
	return (0);
}
