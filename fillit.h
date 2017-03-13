/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/05 12:03:05 by jkalia            #+#    #+#             */
/*   Updated: 2017/03/12 21:29:16 by jkalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <stdlib.h>
# include <libft.h>

# define BUFFER_SIZE 546
# define V1(a) (a == '#' || a == '.')
# define V2(a) (a == '\n')
# define V3(a) (a == '#' || a == '.' || a == '\n')
# define DOT(a) (a == '.')
# define DO2(a, b) if(1){a; b;}
# define DO3(a, b, c) if(1){a; b; c;}

void			error(void);
void			change_end(char **src, int bytes);
void			trim_newline(char **src);
t_bool			valid_pattern(char **src, int blocks);
size_t			initial_board_size(size_t nb_blocks);
void			delete_map(char **map);
char			**new_map(size_t size);
void			print_map(char **map, size_t size);
t_bool			recursion(char **tbl, char **map, int col, int row);
char			get_letter(char *str);
void			rename_block(char **src);
int				solve(char **tbl, size_t blocks);

typedef enum	e_bool
{
	false,
	true
}				t_bool;
#endif
