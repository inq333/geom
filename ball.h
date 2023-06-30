#pragma once
using namespace std;
class ball
{
private:

	float radius;		//Радиус
	float x, y, z;		//Задание координат центральной точки
	float xQ, yQ, zQ;		//Задание координат точки, лежащей на поверхности

public:

	float Getradius();
	float Getx();
	float Gety();
	float Getz();

	float GetxQ();
	float GetyQ();
	float GetzQ();
	
	float radiusxyz();		//Расчёт радиуса в случае задания по координатам
	float square();		//Расчёт плoщади шара
	float volume();		//Расчёт объёма шара

	void Setradius(float valueradius);
	void Setx(float valuex);
	void Sety(float valuey);
	void Setz(float valuez);

	void SetxQ(float valuexQ);
	void SetyQ(float valueyQ);
	void SetzQ(float valuezQ);

	void Show();
};