/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/01 21:16:40 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int handle_key(int keycode, t_data *data)
{
    if (keycode == 53) // ESC key on macOS
    {
        mlx_destroy_window(data->mlx, data->win);
        exit(0);
    }
    return (0);
}

int handle_mouse(int button, int x, int y, t_data *data)
{
    (void)x;
    (void)y;
    (void)data;
    if (button == 4 || button == 5) // Mouse wheel up/down
    {
        // Will implement zoom later
        printf("Mouse wheel event: %d\n", button);
    }
    return (0);
}

int close_window(t_data *data)
{
    mlx_destroy_window(data->mlx, data->win);
    exit(0);
    return (0);
}
