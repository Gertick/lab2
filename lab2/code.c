#include <stdio.h>
#include <locale.h>


void task1()
{

	printf("123\n"); // подзадание 1
	printf("1\n2\n3\n"); // подзадание 2
	printf("1\n\tt2\n\t\tt3\n"); // подзадание 3
	printf("%d\n\t%d\n\t\t%d\n",1,2,3); // подзадание 4
	printf("%10.3f\n ", 12.234657); // подзадание 5
	printf("%10.5f\n ", 12.234657); // подзадание 6
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2); // подзадание 7
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5); // подзадание 8
	printf("Результат умножения %d на %d равен %d\n ", 2000, 4, 2000 * 4); // подзадание 9
	printf("%e разделить на %e равно %e\n ", 5., 2000000., 5. / 2000000); // подзадание 10

}

void task2()
{
	int N, K;
	N = 11;
	K = 15;

	printf("\n");
	printf("Сейчас % d часов % d минут 00 секунд\n", N, K);
	printf("Идёт %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N - 1, 60 - K);
	printf("С 8:00 прошло %d секунд\n", N * 60 * 60 + K * 60);
	printf("Текущий час = %10.2f суток  и текущая минута =  %10.2f часа\n", N / 24., K / 60.);
}

void task3()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	float L = 433.0;
	float n = 4.0;
	int k, m;
	k = 3;
	m = 1;

	printf("\n");
	printf("Дано:\n\t %7.0f\n\t %7.0f\n\t _______\nОтвет:\n\t %+.*f\n\n", n, L, m, n/L);
}

void homework()
{
	int m, t, S;

	m = 1;
	t = 5;
	S = 12;

	int sec = m * 60; // переводим в секунды

	int speed = t * S / sec;
	printf("\n");
	printf("Если за %d секунд поезд проходит %d столбов,а расстояние между ними равно %d м, то его скорость равна %d м/с", sec, t, S, speed);
}

void main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	task1();
	task2();
	task3();
	homework();

	getchar();
}