#pragma once
#include <tuple>

class Cone {
private:
    double cone_radius;
    double cone_height;
public:
    Cone(double cone_radius, double cone_height);
    Cone();
    Cone(const Cone& obj);
    ~Cone();
    double get_radius();
    double get_height();
    void set_radius(double);
    void set_height(double);
    std::tuple<double, double, double> vertex();
    double cone_base_area();
    double cone_lateral_area();
    double cone_volume();
};
