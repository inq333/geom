#pragma once
using namespace std;
class cylinder
{
private:

  float radius, h;    //Радиус, Высота цилиндра

public:


  float Getradius();
  float Geth();

  float Getsquare();    //Расчёт площади цилиндра
  float Getvolume();    //Расчёт объёма цилиндра

  void Setradius(float valueradius);
  void Seth(float valueh);

  float volume();
  float square();

  void Show();
};
