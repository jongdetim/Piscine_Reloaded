/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tide-jon <tide-jon@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/20 13:14:48 by tide-jon       #+#    #+#                */
/*   Updated: 2019/03/20 13:46:53 by tide-jon      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char	*ft_strcpy(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

char	*ft_strdup(char *src)
{
	char *dest;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	return (ft_strcpy(dest, src));
}
