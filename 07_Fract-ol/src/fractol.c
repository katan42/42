/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/01 21:16:42 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int main(void)
{
    t_data  data;

    data.mlx = mlx_init();
    if (!data.mlx)
        return (1);

    if (!init_window(&data))
        return (1);

    mlx_key_hook(data.win, handle_key, &data);
    mlx_mouse_hook(data.win, handle_mouse, &data);
    mlx_hook(data.win, 17, 0, close_window, &data);

    mlx_loop(data.mlx);
    return (0);
}