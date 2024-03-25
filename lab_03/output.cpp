#include "output.hpp"
#include <iostream>

namespace output {
    void name() {
        std::cout << "Lab_03: NAMESPACES AND GEOMETRICAL PROPERTIES OF OBJECTS by Kudria Denis K-13" << std::endl;
    }

    void task_requirement() {
        std::cout << "Program checks whether circle and quadrilateral intersect" << std::endl;
    }

    void coord_circle() {
        std::cout << "Enter two coordinates of the center and radius of the circle: ";
    }

    void coord_quadr() {
        std::cout << "Enter eight coordinates of four points of the quadrilateral: ";
    }

    void incor_input() {
        std::cout << "Incorrect input. Enter one more time, please" << std::endl;
    }

    void inv_rad() {
        std::cout << "Invalid radius. Enter one more time, please" << std::endl;
    }

    void inv_quadr() {
        std::cout << "Invalid quadrilateral. Enter one more time, please" << std::endl;
    }

    void figures_intersect() {
        std::cout << "Gives figures intersect " << std::endl;
    }

    void figures_dnt_intersect() {
        std::cout << "Gives figures do not intersect " << std::endl;
    }

    void bye() {
        std::cout << "GG, GL, BB" << std::endl;
    }
}
