/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:41:40 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/21 15:58:04 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char *arr1 = "holaholaholahola";
	char *arr2 = "hola123hola123ho";
	char *arr3 = "1231231231231232";

	printf("%d", ft_str_is_numeric(arr1));
	printf("%d", ft_str_is_numeric(arr2));
	printf("%d", ft_str_is_numeric(arr3));
}*/
