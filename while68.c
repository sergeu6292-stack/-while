/*Пользователь вводит число N. Найдите и выведите сумму всех чисел от 1 до N.
Выполнил: Мартиросян Сергей группа: 201ИС-25 10.10.2026*/
#include <stdio.h>
int main () {
	int n;
	int sum;
	int i;
	i = 1;
	sum = 0;
	scanf ("%d", &n);
	while (i <= n)  {
		sum = sum + i;
		i = i + 1;
	}
	printf ("%d %d", n, sum);
	return 0;
}

