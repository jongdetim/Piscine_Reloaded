/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 17:47:51 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/19 19:56:06 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int	index;

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

void	ft_sort_str_array(int argc, char **argv)
{
	int		index;
	char	*temp;

	index = 2;
	while (index < argc)
	{
		if (ft_strcmp(argv[index], argv[index - 1]) < 0)
		{
			temp = argv[index];
			argv[index] = argv[index - 1];
			argv[index - 1] = temp;
			index = 1;
		}
		index++;
	}
}

int		main(int argc, char **argv)
{
	int counter;

	if (argc == 2)
	{
		ft_putstr(argv[1]);
		return (0);
	}
	ft_sort_str_array(argc, argv);
	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		counter++;
	}
	return (0);
}
