/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:49:07 by acastano          #+#    #+#             */
/*   Updated: 2021/11/02 19:27:56 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap_params(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = argc - 1;
		while (j > i)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				ft_swap_params(&argv[i], &argv[j]);
			j--;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	if (*str == '\0')
		return ;
	while (*str)
		ft_putchar(*str++);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
		return (0);
	ft_sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
