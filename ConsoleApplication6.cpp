// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
// POKAZIVACI NA FJE

#include <stdio.h>
float obim(float a, float b)
{
	return 2 * (a + b);
}
float povrsina(float a, float b)
{
	return a * b;
}
int main()
{
	float a = 5, b = 10;
	float (*pok)(float, float);
	pok = obim;
	printf("Obim: %f\n", pok(a, b));
	pok = povrsina;
	printf("Povrsina: %f\n", pok(a, b));
	return 0;
}
