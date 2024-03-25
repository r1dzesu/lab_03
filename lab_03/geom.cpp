#include "geom.hpp"
#include "output.hpp"
#include <cmath>
#include <iostream>

namespace geometry {
	double angle_betw_vec(double xv1, double yv1, double xv2, double yv2) {
		return xv1 * xv2 + yv1 * yv2 / (std::sqrt(xv1 * xv1 + yv1 * yv1) * std::sqrt(xv2 * xv2 + yv2 * yv2));
	}

	double dist_betw_points(double x1, double y1, double x2, double y2) {
		return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	}

	double dist_betw_point_segment(double xc, double yc, double x1, double y1, double x2, double y2) {
		if (angle_betw_vec(xc - x1, yc - y1, x2 - x1, y2 - y1) <= 0 || angle_betw_vec(xc - x2, yc - y2, x1 - x2, y1 - y2) <= 0)
			return std::min(dist_betw_points(xc, yc, x1, y1), dist_betw_points(xc, yc, x2, y2));
		double a = x1 - x2, b = y2 - y1, c = -y2 * x1 + x2 * y1;
		return abs(a * xc + b * yc + c) / sqrt(a * a + b * b);
	}

	void position_quard_about_circle(double xc, double yc, double r, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
		if (dist_betw_points(xc, yc, x1, y1) < r && dist_betw_points(xc, yc, x2, y2) < r && dist_betw_points(xc, yc, x3, y3) < r && dist_betw_points(xc, yc, x4, y4) < r) {
			output::figures_dnt_intersect(); // quard is in the circle
			return;
		}
		 
		if (dist_betw_point_segment(xc, yc, x1, y1, x2, y2) <= r || dist_betw_point_segment(xc, yc, x2, y2, x3, y3) <= r || dist_betw_point_segment(xc, yc, x3, y3, x4, y4) <= r || dist_betw_point_segment(xc, yc, x4, y4, x1, y1) <= r) {
			output::figures_intersect(); // quadr intersects the circle
			return;
		}
		output::figures_dnt_intersect(); // quard is in the circle
		return;
	}

	bool three_points_are_collinear(double x1, double y1, double x2, double y2, double x3, double y3) {
		return (y3 * (x1 - x2) + x3 * (y2 - y1) - y2 * x1 + x2 * y1 == 0) ? true : false;
	}

	bool four_points_are_collinear(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
		return (three_points_are_collinear(x1, y1, x2, y2, x3, y3) || three_points_are_collinear(x1, y1, x2, y2, x4, y4) || three_points_are_collinear(x2, y2, x3, y3, x4, y4) || three_points_are_collinear(x1, y1, x3, y3, x4, y4)) ? true : false;
	}
}
