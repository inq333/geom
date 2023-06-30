#include <iostream>
#include <cmath>
#include "cylinder.h"
# define PI 3.14
using namespace std;

Setradius(double valueradius) 
{
  radius = valueradius;
}
Seth(double valueh)
{
  h = valueh;
}
Setx(double valuex) 
{
  x = valuex;
}
Sety(double valuey) 
{
  y = valuey;
}
Setz(double valuez) 
{
  z = valuez;
}

Getradius() 
{
  return radius;
}
Geth()
{
  return h;
}
Getx() 
{
  return x;
}
Gety() 
{
  return y;
}
Getz() 
{
  return z;
}

Getsquare() 
{
  return square = 2 * PI * radius * h + 2 * PI * radius * radius;
}

Getvolume() 
{
  return volume = PI * radius * radius * h;
}

Show() 
{
  cout << "X = " << x << "\nY = " << y << "\nZ = " << z  << "\nXq = " << xQ << "\nYq = " << yQ << "\nZq = " << zQ << "\nRadius = " << radius << "\nSquare = " << square << "\nVolume = " << volume << endl << endl;
}
