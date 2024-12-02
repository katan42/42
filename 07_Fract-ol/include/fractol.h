/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:16:35 by katan             #+#    #+#             */
/*   Updated: 2024/12/02 21:12:57 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <unistd.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <math.h>
# include <errno.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"
# include "../minilibx-linux/mlx.h"
# include "../minilibx-linux/mlx_int.h"

# define WIDTH 800
# define HEIGHT 800
# define MAX_ITER 100

/* Key codes for Linux/X11 */
# define ESC_KEY        65307
# define ARROW_LEFT     65361
# define ARROW_UP       65362
# define ARROW_RIGHT    65363
# define ARROW_DOWN     65364

/* Mouse button codes */
# define MOUSE_WHEEL_UP     4
# define MOUSE_WHEEL_DOWN   5
# define MOUSE_LEFT_CLICK   1
# define MOUSE_RIGHT_CLICK  3

/* X11 event masks */
# define KEY_PRESS          2
# define KEY_RELEASE        3
# define MOUSE_PRESS        4
# define MOUSE_RELEASE      5
# define MOUSE_MOVE         6
# define EXPOSE            12
# define DESTROY           17

/* X11 event masks in bit form (used in mlx_hook) */
# define KEY_PRESS_MASK     (1L<<0)
# define KEY_RELEASE_MASK   (1L<<1)
# define MOUSE_PRESS_MASK   (1L<<2)

#define RED_PIXEL 0xFF0000
#define GREEN_PIXEL 0xFF00
#define WHITE_PIXEL 0xFFFFFF

//https://imagemagick.org/script/color.php

typedef struct s_complex
{
	double real;
	double imag;
}	complex;


//struct
typedef struct s_data
{
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_data;

int	init_window(t_data *data);
int	handle_key(int keycode, t_data *data);
int	handle_mouse(int button, int x, int y, t_data *data);
int close_window(t_data *data);
int clean_exit(t_data *data);

//exit

#endif
