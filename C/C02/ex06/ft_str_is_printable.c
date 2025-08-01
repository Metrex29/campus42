/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:56:00 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/21 13:56:28 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char *arr4 = "HOLAHOLAHOLAHOLA";
	char *arr5 = "\t";

	printf("%d", ft_str_is_printable(arr1));
	printf("%d", ft_str_is_printable(arr2));
	printf("%d", ft_str_is_printable(arr3));
	printf("%d", ft_str_is_printable(arr4));
	printf("%d", ft_str_is_printable(arr5));
}*/
