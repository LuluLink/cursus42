/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusokol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:18:32 by lusokol           #+#    #+#             */
/*   Updated: 2020/01/30 15:52:55 by lusokol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

typedef struct	s_mlx
{
	void	*mlx_ptr;
	void	*win_ptr;
}				t_mlx;

typedef struct	s_coord
{
	double		x;
	double		y;
}				t_coord;

typedef struct	s_draw
{
	int			drawStart;
	int			drawEnd;
	int			hauteurLigne;
	int			y;
	int			ceilling;
	int			floor;
}				t_draw;

typedef struct	s_info
{
	double		dirX;
	double		dirY;
	double		planeX;
	double		planeY;
	double		cameraX;
	double		rayPosX;
	double		rayPosY;
	double		rayDirX;
	double		rayDirY;
	double		deltaDistX;
	double		deltaDistY;
	int			mapX;
	int			mapY;
	double		sideDistX;
	double		sideDistY;
	int			stepX;
	int			stepY;
	int			side;
	double		perpWallDist;
}				t_info;

typedef struct	s_cub
{
	int		res_y;
	int		res_x;

	char	*north;
	char	*south;
	char	*west;
	char	*east;

	char	*sprite;
	int		floor;
	int		ceilling;

	char	**map;
	t_coord	coord;
	t_mlx	minilibx;
	t_info	info;
	t_draw	draw;
}				t_cub;

char	**create_tab(int fd);
t_cub	*ft_fill_struct(char **str);
int		get_next_line(int fd, char **line);
int		check_map(char **map);

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "libft/libft.h"
# include "minilibx/mlx.h"
# include "math.h"

#endif
