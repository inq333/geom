#include <iostream>
#include "ball.h"
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

void ball::show() {
	cout << "X = " << x << "\nY = " << y << "\nZ = " << z << "\nRadius= " << radius << "Xq = " << xQ << "\nYq = " << yQ << "\nZq = " << zQ << endl << endl;
}
