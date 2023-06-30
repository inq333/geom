#pragma once
using namespace std;
class cylinder
{
private:

  double radius, h;    //Радиус, Высота цилиндра
  double square, volume;    //Площадь, Объём
  
public:

  double Getradius();
  double Geth();

  double Getradiusxyz();    //Расчёт радиуса в случае задания по координатам
  double Getsquare();    //Расчёт площади цилиндра
  double Getvolume();    //Расчёт объёма цилиндра

  void Setradius(double valueradius);
  void Seth(double valueh);

  void Show();
};
