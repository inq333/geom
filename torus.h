#pragma once
#include <iostream>

using namespace std;

class Torus // ������������ ����� "���"
{
 public:
	double radius; // ������ ���������� ���� 
	double volume; // ����� ����
	double surface_area; // ������� ����������� ����
	double distance; // ���������� �� ������ ���������� ���� �� ����������� ��� 
	Torus();
	Torus(double volume, double surface_area, double radius, double distance);
	Torus(const Torus& obj);
	~Torus();
	double volume;
	double surface_area;
	double radius;
	double distance;

	double get_volume();
	double get_surface_area();
	double get_radius();
	double get_distance();

	void set_volume(double	volume);
	void set_surface_area(double surface_area);
	void set_radius(double radius);
	void set_distance(double distance);
	
	void show();
};