/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:49:44 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/15 18:56:59 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = temp ;
		i++;
	}
}
/*
int	main(void)
{
	int size = 5;
	int tab[] = {1,2,3,4,5};

	ft_rev_int_tab(tab,size);
	for (int i = 0; i < size; i++)
	{
			printf("%d",tab[i]);
	}
	
}*/
