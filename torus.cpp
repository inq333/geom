#include <iostream>
#include <cmath>
#include "Torus.h"
#define PI 3.1415926535

using namespace std;

Torus::Torus() : radius(0.0), distance(0.0) {}
Torus::Torus(float radius, float distance)
{
	this->radius = radius;
	this->distance = distance;
}
Torus::Torus(const Torus& obj)
{
	this->radius = obj.radius;
	this->distance = obj.distance;
}
Torus::~Torus() {}
float Torus::get_radius() { return radius; }
float Torus::get_distance() { return distance; }

void Torus::set_radius(float radius) { this->radius = radius; }
void Torus::set_distance(float distance) { this->distance = distance; }

double Torus::surface_area() {return 4 * PI * PI * radius * distance;}
double Torus::volume() {return 2 * PI * PI * distance * radius * radius;}

void Torus::show() 
{
	cout << "Torus radius: " << radius << endl;
	cout << "Distance to the central axis: " << distance << endl;
}
