#pragma once
using namespace std;
class cylinder
{
private:

  double radius, h;    //Радиус, Высота цилиндра
  double square, volume;    //Площадь, Объём
  double x, y, z;    //Задание координат центральной точки
  double xh, yh, zh;    //Задание координат точки, лежащей в центре одного из оснований 
  double xQ, yQ, zQ;    //Задание координат точки, лежащей в одной плоскости с центром цилиндра, параллельной основанию, на поверхности 
  
public:

  float Getradius();
  float Geth();
  float Getx();
  float Gety();
  float Getz();
  float Getxh();
  float Getyh();
  float Getzh();
  float GetxQ();
  float GetyQ();
  float GetzQ();

  double Getradiusxyz();    //Расчёт радиуса в случае задания по координатам
  double Getsquare();    //Расчёт площади цилиндра
  double Getvolume();    //Расчёт объёма цилиндра

  void Setradius(float valueradius);
	void Setx(float valuex);
	void Sety(float valuey);
	void Setz(float valuez);
  void Seth(float valueh);
	void SetxQ(float valuexQ);
	void SetyQ(float valueyQ);
	void SetzQ(float valuezQ);
  void Setxh(float valuexh);
	void Setyh(float valueyh);
	void Setzh(float valuezh);
	void Show();
};
