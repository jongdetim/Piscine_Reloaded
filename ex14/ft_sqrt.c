/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 16:30:17 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/21 12:31:08 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 0;
	while (result <= ((nb + 1) / 2))
	{
		if ((result * result) == nb)
			return (result);
		result++;
	}
	return (0);
}
