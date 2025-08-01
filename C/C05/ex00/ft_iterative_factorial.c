/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 11:39:13 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/31 14:24:02 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	resul;

	i = 1;
	resul = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		resul = resul * i;
		i++;
	}
	return (resul);
}
/*
int main()
{
#include <stdio.h>
	int n = 5;
	int resul = ft_iterative_factorial(n);
	printf("%d", resul);
}*/
