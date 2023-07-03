#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Torus
{
 private:
    float radius;
    float distance;
 public:
    Torus();
    Torus(float radius, float distance);
    Torus(const Torus& obj);
    ~Torus();


    float get_radius();
    float get_distance();

    double surface_area();
    double volume();

    void set_radius(float radius);
    void set_distance(float distance);

    void show();
};
