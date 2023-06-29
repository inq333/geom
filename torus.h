#pragma once
#include <iostream>
#define PI 3.1415926535
#include <cmath>

using namespace std;

class Torus // Родительский класс "тор"
{
 private:
	float radius; // Радиус окружности тора 
	float distance; // Расстояние от центра окружности тора до центральной оси
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