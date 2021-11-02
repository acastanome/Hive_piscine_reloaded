/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:36:24 by acastano          #+#    #+#             */
/*   Updated: 2021/11/02 12:25:48 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	if (str == '\0')
		return ;
	while (*str)
		ft_putchar(*str++);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_print_params(argc, argv);
	return (0);
}
