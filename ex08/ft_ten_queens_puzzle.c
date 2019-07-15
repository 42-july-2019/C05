/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:15:53 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/15 18:59:13 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(int array[])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = array[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int		is_safe(int array[], int curr_column, int curr_row)
{
	int i;

	i = 0;
	while (i < curr_column)
	{
		if (array[i] == curr_row)
			return (0);
		i++;
	}
	i = 0;
	while (i < curr_column)
	{
		if (array[i] - i == curr_row - curr_column)
			return (0);
		i++;
	}
	i = 0;
	while (i < curr_column)
	{
		if (array[i] + i == curr_row + curr_column)
			return (0);
		i++;
	}
	return (1);
}

int		solution_found(int array[], int *result)
{
	print_solution(array);
	*result = *result + 1;
	return (1);
}

int		solve_puzzle(int array[], int curr_column, int start_row, int *result)
{
	int		i;

	if (curr_column == 10)
		return (solution_found(array, result));
	i = start_row;
	while (i < 10)
	{
		if (is_safe(array, curr_column, i))
		{
			array[curr_column] = i;
			if (solve_puzzle(array, curr_column + 1, 0, result))
			{
				if (i + 1 < 10)
				{
					solve_puzzle(array, curr_column, i + 1, result);
					array[curr_column] = -1;
				}
				return (1);
			}
			array[curr_column] = -1;
		}
		i++;
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	int		result;
	int		array[10];

	result = 0;
	solve_puzzle(array, 0, 0, &result);
	return (result);
}
