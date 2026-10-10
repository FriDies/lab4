#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int A, B;
	int condition;
	printf("=== СИСТЕМА КОНТРОЛЯ КОФЕ-МАШИНЫ ===\n");
	printf("Введите номера рабочих мест Анны (A) и Бориса (B):");
	scanf("%d %d", &A, &B);
	condition = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
	printf("Доступ разрешён (1 - да, 0 - нет): %d\n", condition);
	return 0;
	}