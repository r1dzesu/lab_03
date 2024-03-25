#include "output.hpp"
#include "circle.hpp"
#include "quadr.hpp"
#include "geom.hpp"
#include <iostream>

int main()
{
    double xc, yc, r, x1, y1, x2, y2, x3, y3, x4, y4;

    output::name();
    output::task_requirement();

    geometry::circle::input_circle(xc, yc, r);
    geometry::quadr::input_quadr(x1, y1, x2, y2, x3, y3, x4, y4);

    geometry::position_quard_about_circle(xc, yc, r, x1, y2, x2, y2, x3, y3, x4, y4);

    output::bye();
    return 0;
}
