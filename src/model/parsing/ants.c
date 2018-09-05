/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ants.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorzhak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 17:24:05 by akorzhak          #+#    #+#             */
/*   Updated: 2018/07/02 17:24:07 by akorzhak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem-in.h"

int		get_ants(t_lem *l)
{
	char *line;

	line = NULL;
	while (get_next_line(0, &line) > 0)
	{
		if (save_map_line(l, line) == MALLOC_ERROR)
			return (exit_with_error(l, &line, MALLOC_FAIL));
		if (*line == '#')
		{
			if (ft_strstr(line, "##start") || ft_strstr(line, "##end"))
				return (exit_with_error(l, &line, IRRELEVANT_COMMAND));
			ft_strdel(&line);
			continue ;
		}
		else if (ft_isdigit(*line))
		{
			if ((l->ants_nb = ft_atoi(line)) <= 0)
				return (exit_with_error(l, &line, INVALID_ANTS_NB));
		}
		else
			return (exit_with_error(l, &line, INVALID_ANTS_NB));
		ft_strdel(&line);
		return (OK);
	}
	return (exit_with_error(l, &line, EMPTY_MAP));
}
