#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");

	printf("Задание 1\n");
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("Исходные значения:\n");
	printf("char: %c\n", c);
	printf("int: %d\n", i);
	printf("float: %f\n", f);
	printf("double: %e\n", d);

	printf("Введите символ: ");
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

	printf("Задание 1а\n");
	float g;
	printf("Введите вещественное число для разделения: ");
	scanf("%f", &g);
	int h=(int)g;
	float e=g-h;
	printf("Целая часть: %d\n", h);
	printf("Дробная часть: %f\n", e);

	printf("\nЗадание 1б\n");
	char k;
	printf("Введите символ: ");
	scanf(" %c", &k);
	printf("Шестнадцатеричный код введённого символа: %x\n", (unsigned char)k);
	printf("Десятичный код введённого символа: %d\n", (unsigned char)k);

	printf("Задание 1в\n");
	int l;
	printf("Введите целое число i: ");
	scanf("%d", &l);
	if (i != 0)
	{
		printf("1 / i = %.6f\n", 1.0 / i);
	}
	else
	{
		printf("Деление на ноль невозможно\n");
	}
	
	printf("Задание 2\n");
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

	printf("Явное преобразование\n");
	printf("(float)a / b  = %f\n", (float)a / b);
	printf("(double)a / b = %f\n", (double)a / b);

	printf("Эксперимент со скобками\n");
	printf("(float)(a / b) = %f\n", (float)(a / b));
	printf("(float)a / b   = %f\n", (float)a / b);

	printf("Пояснение: (float)(a / b) сначала выполняет целочисленное деление, потом преобразует результат в вещественный\n");
	printf("(float)a / b сначала преобразует a в вещественное число, потом выполняет деление\n");

	printf("Задание 3\n");
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