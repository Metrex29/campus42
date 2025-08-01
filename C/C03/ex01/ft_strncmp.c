/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:04:01 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/28 10:43:48 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
/*
int main(void)
{
#include <stdio.h>
#include <string.h>
	// EJE 1
	char *arr1 = "ABC";
	char *arr2 = "AB";
	// EJE 2
	char *arr2_1 = "ABC";
	char *arr2_2 = "AB";
	// OLA
	printf("n1: %d | n2:%d\n",
		   ft_strncmp(arr1, arr2, 3),
		   ft_strncmp(arr2_1, arr2_2, 2));
	printf("%d\n", strncmp(arr1, arr2, 3));
	printf("%d", strncmp(arr2_1, arr2_2, 2));
}
*/
