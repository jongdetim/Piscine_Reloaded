/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 14:01:05 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/20 14:15:43 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int index;

	index = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[index] = min;
		index++;
		min++;
	}
	return (arr);
}
