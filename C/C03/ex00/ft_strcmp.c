/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 15:58:13 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/26 17:14:36 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
#include <stdio.h>
	// EJE 1
	char *arr1 = "ABC";
	char *arr2 = "ABC";
	// EJE 2
	char *arr2_1 = "ABC";
	char *arr2_2 = "AB";
	// EJE 3
	char *arr3_1 = "ABA";
	char *arr3_2 = "ABZ";
	// EJE 4
	char *arr4_1 = "ABJ";
	char *arr4_2 = "ABC";
	// EJE 5
	char *arr5_1 = "\201";
	char *arr5_2 = "A";
	// OLA
	printf("n1: %d | n2: %d | n3: %d | n4: %d | n5: %d\n",
		ft_strcmp(arr1, arr2),
		ft_strcmp(arr2_1, arr2_2),
		ft_strcmp(arr3_1, arr3_2),
		ft_strcmp(arr4_1, arr4_2),
		ft_strcmp(arr5_1, arr5_2));
}*/
