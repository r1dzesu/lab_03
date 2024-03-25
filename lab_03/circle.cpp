#include "circle.hpp"
#include "output.hpp"
#include <iostream>
#include <limits>

namespace geometry {
	namespace circle {
		bool input_circle(double& xc, double& yc, double& r) {
			output::coord_circle();
			std::cin >> xc >> yc >> r;
			if (!std::cin)
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				output::incor_input();
				input_circle(xc, yc, r);
				return false;
			}
			if (r < 0)
			{
				output::inv_rad();
				input_circle(xc, yc, r);
				return false;
			}
			return true;
		}

	}
}