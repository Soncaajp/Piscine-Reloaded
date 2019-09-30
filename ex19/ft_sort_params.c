/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 17:06:24 by rhulk             #+#    #+#             */
/*   Updated: 2019/04/08 16:45:01 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		else if (*s1 < *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print(char **argv, int argc)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
}

void	bubblesort(char **argv, int argc)
{
	int		i;
	char	*buf;
	int		flag;

	i = 1;
	flag = 0;
	while (i < argc)
	{
		if (i + 1 != argc && ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			buf = argv[i + 1];
			argv[i + 1] = argv[i];
			argv[i] = buf;
			flag = 1;
		}
		i++;
		if (i == argc && flag == 1)
		{
			flag = 0;
			i = 0;
		}
	}
	ft_print(argv, argc);
}

int		main(int argc, char **argv)
{
	if (argc != 1)
		bubblesort(argv, argc);
	return (0);
}
