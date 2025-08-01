/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:47:11 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/21 13:48:01 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
#include <stdio.h>

	char *arr1 = "holaholahola";
	char *arr2 = "123123123";
	char *arr3 = "ASDqwe";

	printf("%d", ft_str_is_lowercase(arr1));
	printf("%d", ft_str_is_lowercase(arr2));
	printf("%d", ft_str_is_lowercase(arr3));
}*/
