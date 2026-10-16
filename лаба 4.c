#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int task1()
{
	printf("=== Задание 1 ===\n");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("Исходные значения:\n");
	printf("char: %c\n", c);
	printf("int: %d\n", i);
	printf("float: %f\n", f);
	printf("double: %e\n", d);

	printf("\nВведите символ: ");
	scanf(" %c", &c);
	printf("Введите целое число: ");
	scanf("%d", &i);
	printf("Введите вещественное число float: ");
	scanf("%f", &f);
	printf("Введите вещественное число double: ");
	scanf("%lf", &d);
	printf("\nВведённые значения:\n");
	printf("char:   %c\n", c);
	printf("int:    %d\n", i);
	printf("float:  %.2f\n", f);
	printf("double: %.12lf\n", d);

	return 0;
} 
int task1a()
{
	printf("\n=== Задание 1а ===\n");
	float g;
	printf("Введите вещественное число для разделения: ");
	scanf("%f", &g);
	int h = (int)g;
	float e = g - h;
	printf("Целая часть: %d\n", h);
	printf("Дробная часть: %f\n", e);

	return 0;
}
int task1b()
{
	printf("\n=== Задание 1б ===\n");
	char k;
	printf("Введите символ: ");
	scanf(" %c", &k);
	printf("Шестнадцатеричный код введённого символа: %x\n", (unsigned char)k);
	printf("Десятичный код введённого символа: %d\n", (unsigned char)k);

	return 0;
}

int task1v()
{
	printf("\n=== Задание 1в ===\n");
	int l;
	printf("Введите целое число i: ");
	scanf("%d", &l);
	if (l != 0)
	{
		printf("1 / i = %.6f\n", 1.0 / l);
	}
	else
	{
		printf("Деление на ноль невозможно\n");
	}
	return 0;
}

int task2()
{
	printf("\n=== Задание 2 ===\n");
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = a / b;
	z = a / b;
	printf("a=%d, b=%d\n", a, b);
	printf("x (int)    = %d\n", x);
	printf("y (float)  = %f\n", y);
	printf("z (double) = %e\n", z);
	printf("Пояснение: так как a и b-целые числа, то a/b даёт целый результат 3, который затем преобразуется в тип переменной\n");

	printf("\nЯвное преобразование\n");
	printf("(float)a / b  = %f\n", (float)a / b);
	printf("(double)a / b = %f\n", (double)a / b);

	printf("\nЭксперимент со скобками\n");
	printf("(float)(a / b) = %f\n", (float)(a / b));
	printf("(float)a / b   = %f\n", (float)a / b);

	printf("\nПояснение: (float)(a / b) сначала выполняет целочисленное деление, потом преобразует результат в вещественный\n");
	printf("(float)a / b сначала преобразует a в вещественное число, потом выполняет деление\n");

	return 0;
}

int task3()
{

	printf("\n=== Задание 3 ===\n");
	int n;
	printf("Введите трёхзначное число: ");
	scanf("Ваше трёхзначное число%d", &n);
	int last=n%10;
	int first=n/100;
	int middle=(n/10)%10;
	int sum =first+middle+last;
	int reverse =last*100+middle*10+first;
	printf("последняя цифра числа n: %d, первая цифра числа n: %d, сумма цифр данного числа: %d, число 'наоборот': %d\n", last, first, sum, reverse);
	system("pause");
	return 0;
}

int homework()
{
	printf("\n=== Домашнее задание 4 ===\n");
	int A, B;
	printf("=== СИСТЕМА КОНТРОЛЯ КОФЕ-МАШИНЫ ===\n");
	printf("Введите номер рабочего места Анны (A): ");
	scanf("%d", &A);
	printf("Введите номер рабочего места Бориса (B): ");
	scanf("%d", &B);
	if ((A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0))
	{
		printf("Доступ разрешён: Кофе-машина включена\n");
	}
	else
	{
		printf("Доступ запрещён: Кофе-машина выключена\n");
	}
	return 0;
 }

int main()
{
	setlocale(LC_CTYPE, "RUS");
	task1();
	task1a();
	task1b();
	task1v();
	task2();
	task3();
	homework();
	return 0;
}