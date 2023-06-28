#include <iostream>
#include <cmath>
#include "ball.h"
# define PI 3.14

void ball::Setradius(double valueradius) {
	radius = valueradius;
}
void ball::Setx(double valuex) {
	x = valuex;
}
void ball::Sety(double valuey) {
	y = valuey;
}
void ball::Setz(double valuez) {
	z = valuez;
}

void ball::SetxQ(double valuexQ) {
	xQ = valuexQ;
}
void ball::SetyQ(double valueyQ) {
	yQ = valueyQ;
}
void ball::SetzQ(double valuezQ) {
	zQ = valuezQ;
}


double ball::Getradius() {
	return radius;
}
double ball::Getx() {
	return x;
}
double ball::Gety() {
	return y;
}
double ball::Getz() {
	return z;
}

double ball::GetxQ() {
	return xQ;
}
double ball::GetyQ() {
	return yQ;
}
double ball::GetzQ() {
	return zQ;
}

double ball::Getradiusxyz() {
	return radius = sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z));
}

double ball::Getsquare() {
	return square = 4 * PI * radius * radius;
}

double ball::Getvolume() {
	return volume = 4 / 3 * PI * radius * radius * radius;
}

void ball::Show() {
	cout << "X = " << x << "\nY = " << y << "\nZ = " << z  << "\nXq = " << xQ << "\nYq = " << yQ << "\nZq = " << zQ << "\nRadius = " << radius << "\nSquare = " << square << "\nVolume = " << volume << endl << endl;
}
int main() {		//Тестовые данные
	ball a;
	a.SetxQ(3);
	a.SetyQ(4);
	a.SetzQ(5);
	a.Setx(2);
	a.Sety(6);
	a.Setz(7);
	a.Getradiusxyz();
	a.Getsquare();
	a.Getvolume();
	a.Show();
}
