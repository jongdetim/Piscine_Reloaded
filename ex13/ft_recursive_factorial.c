/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 15:31:18 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/19 15:54:44 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	if (1 < nb && nb <= 12)
	{
		return (result = result * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
