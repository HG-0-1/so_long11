/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helfayez <helfayez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 08:58:54 by helfayez          #+#    #+#             */
/*   Updated: 2025/11/06 15:13:08 by helfayez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

#define key_esc 65307
#define key_w 119
#define key_a 97
#define key_s 115
#define key_d 100

#include <stdio.h>
//move
void move_up(void *param);
void move_left(void *param);
void move_down(void *param);
void move_right(void *param);
//wall
int	check_wall_tandb(char **map, int width, int height);
int	check_wall_side(char **map, int width, int height);
int	check_element(char **map, int height, int width);
//map
int map_height();
int len_of_map(char *line);
int rec_map(char **map,int height);
char **read_map(void);


typedef struct s_game
{
	void	*mlx;
	void	*win;
	void	*wall;
	void	*player;
    void	*player1;
	void	*collectible;
	void	*exit;
	void	*floor;
	char	**map;
	int		width;
	int		height;
	int		img_w;
	int		img_h;
}	t_game;
void load_img(t_game *game);


#endif