#pragma once
using namespace std;
class ball
{
private:

	double radius;		//Радиус
	double square, volume;		//Площадь, Объём
	double x, y, z;		//Задание координат центральной точки
	double xQ, yQ, zQ;		//Задание координат точки, лежащей на поверхности
	
public:

	double Getradius();
	double Getx();
	double Gety();
	double Getz();

	double GetxQ();
	double GetyQ();
	double GetzQ();


	void Setradius(double valueradius);
	void Setx(double valuex);
	void Sety(double valuey);
	void Setz(double valuez);

	void SetxQ(double valuexQ);
	void SetyQ(double valueyQ);
	void SetzQ(double valuezQ);

	void show();
};