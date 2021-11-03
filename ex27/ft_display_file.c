/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:20:48 by acastano          #+#    #+#             */
/*   Updated: 2021/11/03 21:15:42 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1

int	ft_is_argc_valid(int argc)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int	ft_display_file(char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	while (read(fd, buf, BUF_SIZE))
		write(1, buf, BUF_SIZE);
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (ft_is_argc_valid(argc) != 0)
		return (1);
	ft_display_file(argv);
	return (0);
}
