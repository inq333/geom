#include "cone.h"
#include <cmath>
#define PI 3.1415926535

Cone::Cone(): cone_radius(0.0), cone_height(0.0) {}
Cone::Cone(double cone_radius, double cone_height) {
    this->cone_radius = cone_radius;
    this->cone_height = cone_height;
}
Cone::Cone(const Cone& obj) { this->cone_radius = obj.cone_radius; this->cone_height = obj.cone_height; }
Cone::~Cone() {}
double  Cone::get_radius() {return cone_radius;}
double Cone::get_height() {return cone_height;}
void Cone::set_radius(double radius) {this->cone_radius = radius;}
void Cone::set_height(double height) {this->cone_height = height;}
std::tuple<double, double, double> Cone::vertex() {
    return std::make_tuple(0.0, 0.0, cone_height);
}
double Cone::cone_base_area() {     //считает площадь основания конуса
    return PI * pow(cone_radius, 2);
}
double Cone::cone_lateral_area() {     //считает площадь поверхности конуса
    double slant_height = sqrt(pow(cone_radius, 2) + pow(cone_height, 2));     //длина стороны конуса(гипотенуза)
    return PI * cone_radius * slant_height;
}
double Cone::cone_volume() {     //считает объем конуса
    return (1.0 / 3.0) * PI * pow(cone_radius, 2) * cone_height;
}
