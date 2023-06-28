#pragma once
#include <tuple>

class Cone {
private:
    double cone_radius;
    double cone_height;
public:
    Cone(double cone_radius, double cone_height);
    std::tuple<double, double, double> vertex();
    double cone_base_area();
    double cone_lateral_area();
    double cone_volume();
};
