/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 10:25:01 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/29 10:25:03 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	resul;
	int	sign;

	i = 0;
	resul = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resul = resul * 10 + (str[i] - '0');
		i++;
	}
	return (resul * sign);
}
/*
int main()
{
#include <stdio.h>
	char *arr1 = " ---+--+1234b567";
	int resul = ft_atoi(arr1);
	printf("%d\n", resul);
}*/
