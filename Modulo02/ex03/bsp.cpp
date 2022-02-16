/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 02:14:32 by mmoreira          #+#    #+#             */
/*   Updated: 2022/02/15 02:14:33 by mmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.hpp"

static int		Z(const Point &p1, const  Point &p2)
{
	if ((p1.getX() * p2.getY() - p1.getY() * p2.getX()) > 0)
		return (1);
	return (-1);
}

static bool	isTriangle( Point const &a, Point const &b, Point const &c )
{
	Fixed det;
	Fixed one(1);

	det = (a.getX() * b.getY() * one) + (a.getY() * one * c.getX());
	det += (one * b.getX() * c.getY()) - (one * b.getY() * c.getX());
	det -= (a.getY() * b.getX() * one) + (a.getX() * one * c.getY());
	if (det != 0)
		return (true);
	return (false);
}

static bool	edgeOrVertex( Point const &a, Point const &b, Point const &c, Point const &point )
{
	if (a == point || b == point || c == point)
		return (true);
	if (!(isTriangle( a, b, point )))
		return (true);
	if (!(isTriangle( a, c, point )))
		return (true);
	if (!(isTriangle( b, c, point )))
		return (true);
	return (false);
}

bool 	bsp( Point const a, Point const b, Point const c, Point const point )
{
	int direct;

	if (!(isTriangle( a, b, c )))
	{
		std::cout << "These points are collinear" << std::endl;
		return (false);
	}
	if (edgeOrVertex( a, b, c, point ))
		return (false);
	direct = Z(point - a, b - a) + Z(point - b, c - b) + Z(point - c, a - c);
	if (direct == 3 || direct == -3)
		return (true);
	return (false);
}
