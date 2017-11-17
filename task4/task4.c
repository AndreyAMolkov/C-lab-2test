#define SIZE 50
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string.h> // Для strlen

	

char* process(char* line)
{
	int i, j = 0, score = 0, count = 0, beginLeft = 0, endRight = 0, lenStr = 0, countRight = 0;
	//char buf[SIZE] = { ' ' };
	char left = ' ', right = ' ';
	
	endRight = strlen(line);
	beginLeft = -1;
	do {

		do
		{
			beginLeft++;
			if (beginLeft == endRight)
				break;
			left = line[beginLeft];
		} while ('A' < left && left < 'Z');

		do {
			endRight--;
			if (beginLeft > endRight)
				break;

			right = line[(endRight)];
		} while ('0' < right && right < '9');
		if (beginLeft < endRight)
		{
			line[beginLeft] = right;
			line[(endRight)] = left;

		}
		else
			break;

	} while (beginLeft < endRight);

	return line;
}

/*Задача №4

   Написать программу, переставляющую символы в массиве согласно правилу:
   сначала идут латинские буквы, потом цифры. Строка задается в коде програм-
   мы в виде случайной последовательности букв и цифр. Пользоваться дополни-
   тельными массивами нельзя.
Пояснение

Сортировка в данной задаче неприменима ввиду ее трудоемкости.
Нужно использовать группировку элементов массива. 
Программа движется по строке с двух концов к середине и при встрече с нежелательными символами выполняет
обмен с символом на другой стороне.

Состав

Программа должна состоять из двух функций:

char* process(char* line) - обработка строки.
main() - организация диалога.*/