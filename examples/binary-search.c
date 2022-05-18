/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary-search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:44:29 by sel-kham          #+#    #+#             */
/*   Updated: 2022/05/18 19:07:59 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	binary_search(int *arr, int start, int end, int a)
{
	int	middle;

	if (start <= end)
	{
		middle = start + (end - 1) / 2;
		if (arr[middle] == a)
			return (middle);
		if (arr[middle] > a)
			return (binary_search(arr, start, middle - 1, a));
		return (binary_search(arr, middle + 1, end, a));
	}
	return (-1);
}

int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	size;
	int	num;
	int	results;

	size = sizeof(arr) / sizeof(arr[0]);
	num = 6;
	results = binary_search(arr, 0, size, num);
	if (results != -1)
		printf("The index of %d in the array is %d.\n", num, results);
	else
		printf("The number %d is not found in the given array.\n", num);
}