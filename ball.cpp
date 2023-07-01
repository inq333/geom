#include <iostream>
#include <cmath>
#include "ball.h"
# define PI 3.14

void ball::Setradius(float valueradius) {
	radius = valueradius;
}
void ball::Setx(float valuex) {
	x = valuex;
}
void ball::Sety(float valuey) {
	y = valuey;
}
void ball::Setz(float valuez) {
	z = valuez;
}

void ball::SetxQ(float valuexQ) {
	xQ = valuexQ;
}
void ball::SetyQ(float valueyQ) {
	yQ = valueyQ;
}
void ball::SetzQ(float valuezQ) {
	zQ = valuezQ;
}


float ball::Getradius() {
	return radius;
}
float ball::Getx() {
	return x;
}
float ball::Gety() {
	return y;
}
float ball::Getz() {
	return z;
}

float ball::GetxQ() {
	return xQ;
}
float ball::GetyQ() {
	return yQ;
}
float ball::GetzQ() {
	return zQ;
}


float ball::radiusxyz() {
	return radius = sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z));
}

float ball::square() {
	return 4.0 * PI * radius * radius;
}

float ball::volume() {
	return 4.0 / 3.0 * PI * radius * radius * radius;
}

void ball::Show() {
	cout << "X = " << x << "\nY = " << y << "\nZ = " << z  << "\nXq = " << xQ << "\nYq = " << yQ << "\nZq = " << zQ << "\nRadius = " << radius << "\nSquare = " << this->square() << "\nVolume = " << this->volume() << endl << endl;
}
int main() {		//Тестовыe данныe
	ball a;
	a.SetxQ(3.0);
	a.SetyQ(4.0);
	a.SetzQ(5.0);
	a.Setx(2.0);
	a.Sety(6.0);
	a.Setz(7.0);
	a.Setradius(4.0);
	a.Show();
}
