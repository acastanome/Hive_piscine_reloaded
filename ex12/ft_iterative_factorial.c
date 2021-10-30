/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 22:40:34 by acastano          #+#    #+#             */
/*   Updated: 2021/10/31 01:32:15 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
		fact = fact * nb--;
	return (fact);
}
