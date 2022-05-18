/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tower-of-hanoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:47:54 by sel-kham          #+#    #+#             */
/*   Updated: 2022/05/18 17:47:54 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	tower_of_hanoi(int n, char src_rod, char mid_rod, char dst_rod)
{
	static int	moves;

	if (n == 1)
	{
		printf("Move the top disk from rod: %c to rod: %c\n", src_rod, dst_rod);
		moves++;
		return ;
	}
	tower_of_hanoi(n - 1, src_rod, dst_rod, mid_rod);
	printf("Move the top disk from rod: %c to rod: %c\n", src_rod, dst_rod);
	moves++;
	tower_of_hanoi(n - 1, mid_rod, src_rod, dst_rod);	
}

int	main(void)
{
	int	rods_num;
	int	moves;

	rods_num = 4;
	moves = tower_of_hanoi(rods_num, 'A', 'B', 'C');
	printf("Number of moves for %d disks is: %d\n", rods_num, moves);
}
