/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inyang <inyang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:11:14 by inyang            #+#    #+#             */
/*   Updated: 2021/07/01 16:45:12 by inyang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing.h"

void	split_by_pipe(char *av)
{
	
}

int	parse_start(int ac, char **av)
{
	int	value;

	while ((value = px_gnl(&line)) > 0)
	{
		strlen = ft_strlen(line);
		if (px_strcmp(line, av[2]) == 0)
		{
			close(fd);
			return (0);
		}
		write(fd, line, strlen);
		write(fd, "\n", 1);
		write(1, prompt, ft_strlen(prompt));
	}
}
