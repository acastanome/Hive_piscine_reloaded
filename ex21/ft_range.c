/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:56:31 by acastano          #+#    #+#             */
/*   Updated: 2021/11/02 21:27:46 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_range(int min, int max)
{
	int	*range;
	int	lenny;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	lenny = max - min + 1;
	range = (int *) malloc(sizeof(int) * lenny);
	if (!range)
		return (NULL);
	while (i < lenny)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
