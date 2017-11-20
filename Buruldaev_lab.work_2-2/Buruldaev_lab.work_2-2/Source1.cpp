/*
Бурулдаев Михаил Виталиевич
Лабораторная работа 2
Вариант 2
Задание: Написать программу, которая вычисляет среднее арифметическое элементов массива без учета минимального и максимального элементов массива. Массив и его длина вводятся пользователем.
*/

#include <malloc.h>
#include <stdio.h>
#include "stdafx.h"
#include <conio.h>

int main()
{
	int lngth;
	int *arr;
	int min = 2147483647;
	int max = -2147483647;
	int summ = 0;
	printf("Enter the length of the array. \n");
	scanf("%d", &lngth);
	if (lngth > 0)
	{
		arr = (int*)malloc(lngth * sizeof(int));
		for (int i = 0; i < lngth; i++)
		{
			printf("Enter the value of the array element. \n");
			scanf("%d", &arr[i]);
			summ = summ + arr[i];
			if (arr[i] < min) min = arr[i];
			if (arr[i] > max) max = arr[i];
		}
		if (lngth > 2) printf("%i", (summ - min - max) / (lngth - 2))
		else printf("%i", 0);
	}
	else printf("Uncorrect enter.");
	_getch();
	return 0;
}