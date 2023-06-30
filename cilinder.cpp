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

Getradius() 
{
  return radius;
}
Geth()
{
  return h;
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

int main() //Тестовые данные
{		
	ball a;
	a.Getsquare();
	a.Getvolume();
	a.Show();
}
