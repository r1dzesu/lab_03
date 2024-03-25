#include "quadr.hpp"
#include "geom.hpp"
#include "output.hpp"
#include <iostream>
#include <limits>

namespace geometry {
	namespace quadr {
		bool  input_quadr(double& x1, double& y1, double& x2, double& y2, double& x3, double& y3, double& x4, double& y4) {
			output::coord_quadr();
			std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
			if (!std::cin)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				output::incor_input();
				input_quadr(x1, y1, x2, y2, x3, y3, x4, y4);
				return false;
			}

			if (four_points_are_collinear(x1, y1, x2, y2, x3, y3, x4, y4))
			{
				output::inv_quadr();
				input_quadr(x1, y1, x2, y2, x3, y3, x4, y4);
				return false;
			}
		}
	}
}