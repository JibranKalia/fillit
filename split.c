/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/06 14:04:46 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/06 16:49:26 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
#include <stdlib.h>

void	change_end(char **src, int bytes)
{
	int		i;
	char	*ch;
	
	ch = *src;
	i = 21;
	while (i < bytes)
	{
		ch[i - 1] = '@';
		i += 21;
	}
}

void	trim_newline(char **src)
{
	int		i;
	int		j;
	int		k;
	char	tmp[20];

	i = 0;
	while(src[i])
	{
		j = 0;
		k = 0;
		while (src[i][j])
		{
			if (src[i][j] == '\n')
				++j;
			tmp[k] = src[i][j];
			++k;
			++j;
		}
		ft_strcpy(src[i], tmp);
		i++;
	}
}

void	trim_block(char **src)
{
	int		i;
	int		j;
	int		count;
	char	*tmp;

	i = 0;
	while (src[i])
	{
		tmp = src[i];
		while (*tmp == '.')
			tmp++;
		j = 0;
		count = 0;
		while (tmp[j])
		{
			if (tmp[j] == '#')
				count++;
			if (count == 4 && tmp[j] == '.')
				tmp[j] = 0;
			j++;
		}
		ft_strcpy(src[i], tmp);
		i++;
	}
}