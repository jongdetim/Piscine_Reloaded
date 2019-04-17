/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 19:06:23 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/21 13:35:41 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int counter;
	int i;

	i = 0;
	counter = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
		{
			counter++;
		}
		i++;
	}
	return (counter);
}
