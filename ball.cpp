#include <iostream>
#include <cmath>
#include "ball.h"
# define PI 3.14

ball::ball() : radius(0.0) {}

ball::ball(float radius) { this->radius = radius; }

ball::ball(const ball& obj) { this->radius = obj.radius; }

ball::~ball() {}

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
    return sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z));
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

