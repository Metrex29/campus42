/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:48:30 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/21 13:49:21 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
    char *arr4 = "HOLAAAA";
	char *arr2 = "123123123";
	char *arr3 = "ASDqwe";

	printf("%d", ft_str_is_uppercase(arr1));
	printf("%d", ft_str_is_uppercase(arr4));
	printf("%d", ft_str_is_uppercase(arr3));
}*/
