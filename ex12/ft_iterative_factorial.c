/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 14:58:41 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/19 15:29:55 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb == 0)
		return (1);
	if (1 <= nb && nb <= 12)
	{
		while (0 < nb)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
