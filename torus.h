#pragma once
#include <iostream>

using namespace std;

class Torus
{
 public:

	double volume;
	double surface_area;
	Torus();
	Torus(double volume, double surface_area);
	Torus(const Torus& obj);
	~Torus();
	double volume;
	double surface_area;

	void set(double	volume);
	void set(double surface_area);
	
	void show();
};

class Toroidal_polyhedron :public Torus
{
private:
	unsigned int facets;
	unsigned int tops;
 public:
	Toroidal_polyhedron();
	Toroidal_polyhedron(double volume, double surface_area, unsigned int Facets, unsigned int Tops):Torus(volume, surface_area){}
	Toroidal_polyhedron(const Toroidal_polyhedron& obj) :Torus(obj) {}
	~Toroidal_polyhedron();
	void set(double	Volume);
	void set(double Surface_area);
	void set(unsigned int Facets);
	void set(unsigned int Tops);

};
