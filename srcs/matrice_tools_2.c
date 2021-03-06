/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrice_tools_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamisdra <mamisdra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:25:22 by mamisdra          #+#    #+#             */
/*   Updated: 2020/02/24 17:10:12 by mamisdra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doom.h"

t_mat4x4	mat_makeid(void)
{
	t_mat4x4	m;

	init_mat_zero(&m);
	m.m[0][0] = 1.0f;
	m.m[1][1] = 1.0f;
	m.m[2][2] = 1.0f;
	m.m[3][3] = 1.0f;
	return (m);
}

t_mat4x4	mat_maketrans(float x, float y, float z)
{
	t_mat4x4	m;

	init_mat_zero(&m);
	m.m[0][0] = 1.0f;
	m.m[1][1] = 1.0f;
	m.m[2][2] = 1.0f;
	m.m[3][3] = 1.0f;
	m.m[3][0] = x;
	m.m[3][1] = y;
	m.m[3][2] = z;
	return (m);
}

t_mat4x4	mat_makeproj(float ffov, float faspectra, float fnear, float ffar)
{
	t_mat4x4	m;
	float		ffovrad;

	init_mat_zero(&m);
	ffovrad = 1.0f / tanf(ffov * 0.5f / 180.0f * 3.14159f);
	m.m[0][0] = faspectra * ffovrad;
	m.m[1][1] = ffovrad;
	m.m[2][2] = ffar / (ffar - fnear);
	m.m[2][3] = 1.0f;
	m.m[3][2] = (-ffar * fnear) / (ffar - fnear);
	m.m[3][3] = 0.0f;
	return (m);
}
