#include <iostream>
#include <cmath>
#include "Torus.h"
#define PI 3,1415926535

using namespace std;

Torus::Torus() :  volume(0.0), radius(0.0), surface_area(0.0), distance(0.0) {}
Torus::Torus(double volume, double radius, double surface_area, double distance)
{
	this->volume = volume;
	this->radius = radius;
	this->surface_area = surface_area;
	this->distance = distance;
}
Torus::Torus(const Torus& obj)
{
	this->volume = obj.volume;
	this->radius = obj.radius;
	this->surface_area = obj.surface_area;
	this->distance = obj.distance;
}
Torus::~Torus() {}
double Torus::get_volume() { return volume = 2 * PI * PI * distance * radius * radius; }
double Torus::get_radius() { return radius; }
double Torus::get_surface_area() { return surface_area = 4 * PI * PI * radius * distance; }
double Torus::get_distance() { return distance; }

void Torus::set_volume(double volume) { this->volume = volume; }
void Torus::set_radius(double radius) { this->radius = radius; }
void Torus::set_surface_area(double surface_area) { this->surface_area = surface_area; }
void Torus::set_distance(double distance) { this->distance = distance; }

void Torus::show() {
	cout << "Torus radius: " << radius << endl;
	cout << "Volume of a torus: " << volume << endl;
	cout << "Distance to the central axis: " << distance << endl;
	cout << "Surface area of a torus: " << surface_area << endl;
}