/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection-sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 13:48:51 by sel-kham          #+#    #+#             */
/*   Updated: 2022/05/18 13:48:51 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	insertion_sort(int arr[], int len)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (++i < len)
	{
		min = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > min)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = min;
	}
}

void	print_arr(int arr[], int len)
{
	int	i;

	i = -1;
	while (++i < len)
		printf("%d ", arr[i]);
	printf("\n");
}

int	main(int c, int v)
{
	int	arr[] = {77, 0, -3, 16, 27, 1, 9};
	int	size;

	size = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, 7);
	print_arr(arr, size);
}
