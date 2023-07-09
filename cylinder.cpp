#include <iostream>
#include <cmath>
#include "cylinder.h"
# define PI 3.14
using namespace std;

void cylinder::Setradius(float valueradius)
{
  radius = valueradius;
}
void cylinder::Seth(float valueh)
{
  h = valueh;
}


float cylinder::Getradius()
{
  return radius;
}

float cylinder::Geth()
{
    return h;
}

float cylinder::square()
{
  return 2 * PI * radius * h + 2 * PI * radius * radius;
}

float cylinder::volume()
{
  return PI * radius * radius * h;
}

void cylinder::Show()
{
  cout << "h= "<< h << "\nRadius = " << radius << "\nSquare = " << this->square() << "\nVolume = " << this->volume() << endl;
}

