/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusokol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:18:32 by lusokol           #+#    #+#             */
/*   Updated: 2020/01/23 17:09:35 by lusokol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

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
