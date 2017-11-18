/* Бурулдаев Михаил Виталиевич
Лабораторная работа 1
Вариант 2
Задание: перевести узлы в километры в час и выразить в метрах в секунду.
*/

#include <stdio.h>
#include "stdafx.h"
#include <conio.h>

int main()
{
	float knotes;
	printf("Enter the speed in the knotes. \n");
	int result = scanf("%f", &knotes);
	if (result == 0) {
		printf("Uncorrect enter.");
	}
	else {
		float km = knotes * 1.852;
		float metr = km * 0.277778;
		printf("%f %s %f %s %f %s", knotes, " kn = ", km, " km/h = ", metr, " m/s.");
	}
	_getch();
	return 0;
}

