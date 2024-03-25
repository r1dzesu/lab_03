#ifndef GEOM_HPP_INCLUDED
#define GEOM_HPP_INCLUDED

namespace geometry {
	double angle_betw_vec(double xv1, double yv1, double xv2, double yv2);
	double dist_betw_points(double x1, double y1, double x2, double y2);
	double dist_betw_point_segment(double xc, double yc, double x1, double y1, double x2, double y2);
	void position_quard_about_circle(double xc, double yc, double r, double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	bool four_points_are_collinear(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	bool three_points_are_collinear(double x1, double y1, double x2, double y2, double x3, double y3);
}

#endif // GEOM_HPP_INCLUDED;
