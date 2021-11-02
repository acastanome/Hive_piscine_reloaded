/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:52:23 by acastano          #+#    #+#             */
/*   Updated: 2021/11/02 20:52:26 by acastano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++ != '\0')
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	copy = (char *) malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
