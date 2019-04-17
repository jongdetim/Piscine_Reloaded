/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 17:00:26 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/19 17:21:59 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s2[index] == '\0')
			return (1);
		if (s1[index] == '\0')
			return (-1);
		if ((s1[index] - s2[index]) != 0)
			return (s1[index] - s2[index]);
		else
			index++;
	}
	return (0);
}
