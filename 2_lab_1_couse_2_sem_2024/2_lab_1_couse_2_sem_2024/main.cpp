#include <iostream>
#include <cmath>|
#include <string>
//#include <stdio.h>
/*Создайте класс, описывающий указанный в вашем варианте реальный объект.Не забывайте про принципы абстракции и инкапсуляции.
Продемонстрируйте использование вашего класса.

3)Куб, расчет площади, объема и длины диагонали.

6)Треугольник, расчет площади, периметра.

*/
//https://github.com/mrBelka/2023_1pm_mo/blob/main/basic/lecture14_intro_oop/main.cpp
using namespace std;

class cube {
private:
	float a_r;
	float ploshyad_r;
	float obiem_r;
	float dlina_diagonali_r;

public:
	cube(float a) { //ᗜˬᗜ
		std::cout << "Cube constructed" << std::endl;
		a_r = fabs(a);
		ploshyad_r = a_r * a_r * 6;
		obiem_r = a_r * a_r * a_r;
		dlina_diagonali_r = a_r * sqrt(3);

	}

	//сеттеры (обновляет данные при изменении длины)
	void setlength(float a) {
		a_r = fabs(a);
		ploshyad_r = a_r * a_r * 6;
		obiem_r = a_r * a_r * a_r;
		dlina_diagonali_r = a_r * sqrt(3);
	}

	//геттеры (ну то геттеры)
	float ploshyad() {
		return ploshyad_r;
	}

	float obiem() {
		return obiem_r;
	}

	float dlina_diagonali() {
		return dlina_diagonali_r;
	}

	~cube() {
		cout << "Cube destroyed" << endl;
	}
};
//полупериметр p = (a + b + c) / 2
//формула герона площадь S = √(p * (p — a) * (p — b) * (p — c))
class triangle {
private:
	float storona1;
	float storona2;
	float storona3;
	float ploshad_r;
	float perimeter_r;

public:
	triangle(float a, float b, float c) { //ᗜˬᗜ
		std::cout << "Triangle constructed" << std::endl;
		storona1 = fabs(a);
		storona2 = fabs(b);
		storona3 = fabs(c);
		perimeter_r = storona1 + storona2 + storona3;
		ploshad_r = sqrt((perimeter_r / 2) * (perimeter_r / 2 - storona1) * (perimeter_r / 2 - storona2) * (perimeter_r / 2 - storona3));
	}
	//сеттеры (обновляет данные при изменении длины)
	void setparameters(float a, float b, float c) {
		storona1 = fabs(a);
		storona2 = fabs(b);
		storona3 = fabs(c);
		perimeter_r = storona1 + storona2 + storona3;
		ploshad_r = sqrt((perimeter_r / 2) * (perimeter_r / 2 - storona1) * (perimeter_r / 2 - storona2) * (perimeter_r / 2 - storona3));
	}
	//геттеры (ну то геттеры)
	float perimeter() {
		return perimeter_r;
	}

	float ploshad() {
		return ploshad_r;
	}
	~triangle() {
		cout << "Triangle destroyed" << endl;
	}
};

void print(float word) { //Это нинзДЯ-код
	std::cout << word << endl;
}
void print(string word) { //Это нинзДЯ-код
	std::cout << word << endl;
}

int main() {
	//куб
	cube el1(2.5);
	print("ploshyad");
	print(el1.ploshyad());
	print("obiem");
	print(static_cast<int>(el1.obiem()));
	print("dlina_diagonali");
	print(static_cast<int>(el1.dlina_diagonali()));

	el1.setlength(3);
	print("ploshyad");
	print(el1.ploshyad());
	print("obiem");
	print(el1.obiem());
	print("dlina_diagonali");
	print(static_cast<int>(el1.dlina_diagonali()));

	//иголка
	triangle el2(3, 4, 5);
	print("ploshyad");
	print(el2.ploshad());
	print("perimeter");
	print(el2.perimeter());

	el2.setparameters(2, 3, 4);
	print("ploshad");
	print(el2.ploshad());
	print("perimeter");
	print(el2.perimeter());
	return 0;
}
