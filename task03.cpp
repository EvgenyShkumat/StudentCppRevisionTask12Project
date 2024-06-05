﻿#include "tasks.h"

/*	Task 03. The Greatest Common Divisor II [наибольший общий делитель, НОД]
*
*	Даны три натуральных числа. Необходимо найти наибольший общий делитель
*	данных чисел. Если данные некорректны, т.е. меньше единицы, 
*	то должен быть возвращён ноль.
*
*	Примечание
*	1)	Наибольшим общим делителем (НОД) чисел 21, 28 и 63 называется
*		наибольшее число, на которое 21, 28 и 63 делятся без остатка.
*		Следовательно, это число 7.
*	2)	Для реализации эффективного алгоритма рекомендуется использовать
*		алгоритм Евклида для нахождения наибольшего общего делителя.
*
*	Формат входных данных [input]
*	На вход функция принимает три целых числа типа int.
*
*	Формат выходных данных [output]
*	Функция должна возвратить целое число, которое является решением задания.
*
*	[ input 1]: 21 28 63
*	[output 1]: 7
*
*	[ input 2]: 18 12 24
*	[output 2]: 6
*
*	[ input 3]: 24 48 36
*	[output 3]: 12
*
*	[ input 4]: 5 13 3
*	[output 4]: 1
*
*	[ input 5]: 1 1 1
*	[output 5]: 1
*
*	[ input 6]: -1 1 1
*	[output 6]: 0
*/

int task03(int n1, int n2, int n3) {
	if (n1 < 1 || n2 < 1 || n3 < 1) {
		return 0;
	}

	int divisor = 1;
	
	int min = n1 > n2 ? n2 : n1;
	min = min > n3 ? n3 : min;
	
	for (int i = min; i >= 2; i--)
	{
		if (n1 % i == 0 && n2 % i == 0 && n3 % i == 0) {
			divisor = i;
			break;
		}
	}
	
	return divisor;
}
