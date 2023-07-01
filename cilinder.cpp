#include <iostream>
#include <cmath>
#include "cilinder.h"
# define PI 3.14
using namespace std;

void Setradius(float valueradius) 
{
  radius = valueradius;
}
void Seth(float valueh)
{
  h = valueh;
}
void Setx(float valuex) 
{
  x = valuex;
}
void Sety(float valuey) 
{
  y = valuey;
}
void Setz(float valuez) 
{
  z = valuez;
}

void Setxh(float valuexh) 
{
  xh = valuexh;
}
void Setyh(float valueyh) 
{
  yh = valueyh;
}
void Setzh(floatvaluezh) 
{
  zh = valuezh;
}

void SetxQ(float valuexQ) 
{
  xQ = valuexQ;
}
void SetyQ(float valueyQ) 
{
  yQ = valueyQ;
}
void SetzQ(floatvaluezQ) 
{
  zQ = valuezQ;
}


float Getradius() 
{
  return radius;
}
float Geth()
{
  return h
}
float Getx() 
{
  return x;
}
float Gety() 
{
  return y;
}
float Getz() 
{
  return z;
}

float Getxh() 
{
  return xh;
}
float Getyh() 
{
  return yh;
}
float Getzh() {
  return zh;
}

float GetxQ() 
{
  return xQ;
}
float GetyQ() 
{
  return yQ;
}
float GetzQ() {
  return zQ;
}

float radiusxyz() 
{
	return radius = sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z));
}

float h()
{
        return h = sqrt((xh - x) * (xh - x) + (yh - y) * (yh - y) + (zh - z) * (zh - z));
}

float Getsquare() 
{
  return 2 * PI * sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z)) * sqrt((xh - x) * (xh - x) + (yh - y) * (yh - y) + (zh - z) * (zh - z)) + 2 * PI * sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z)) * sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z));
}

float Getvolume() 
{
  return PI * sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z)) * sqrt((xQ - x) * (xQ - x) + (yQ - y) * (yQ - y) + (zQ - z) * (zQ - z)) * sqrt((xh - x) * (xh - x) + (yh - y) * (yh - y) + (zh - z) * (zh - z));
}

void Show() 
{
  cout << "X = " << x << "\nY = " << y << "\nZ = " << z  << "\nXq = " << xQ << "\nYq = " << yQ << "\nZq = " << zQ << "\nXh = " << xh << "\nYh = " << yh << "\nZh = " << zh << "\nRadius = " << radius << "\nSquare = " << square << "\nVolume = " << volume << endl << endl;
}
