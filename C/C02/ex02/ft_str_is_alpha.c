/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:57:16 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/21 13:41:00 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char *ejemplo2 = "holaholahola3";
	char *ejemplo3 = "123123rew";
	char *ejemplo4 = "holi";
	printf("%d", ft_str_is_alpha(ejemplo2));
	printf("%d", ft_str_is_alpha(ejemplo3));
	printf("%d", ft_str_is_alpha(ejemplo4));
}*/
