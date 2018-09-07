/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_steps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akorzhak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 17:24:05 by akorzhak          #+#    #+#             */
/*   Updated: 2018/07/02 17:24:07 by akorzhak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Escape sequences for colors.
*/

#include "lem-in.h"

void	red(void)
{
	ft_putstr("\e[38;5;160m");
}

void	yellow(void)
{
	ft_putstr("\e[38;5;226m");
}

void	green(void)
{
	ft_putstr("\e[38;5;82m");
}

void	blue(void)
{
	ft_putstr("\e[38;5;38m");
}
