#define _CRT_N0
#define SIZE 20
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string.h> // Для strlen
int main()
{
	int i,j=0, score = 0, count = 0, beginLeft=0,endRight = 0, lenStr = 0,countRight=0;
	char buf[SIZE] = { ' '};
	char left=' ', right=' ';
	srand(time(0));
	for (i = 0;i < SIZE - 1;i++)
	{
		switch (rand() % 2)
		{
		/*case 0:
			buf[i] = rand() % ('z' - 'a' + 1) + 'a';
			break;*/
		case 0:
			buf[i] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		case 1:
			buf[i] = rand() % ('0' - '9' + 1) + '1';
			break;
		}
	}
		
	buf[SIZE - 1] = '\0';
	printf("random string :\n");
	puts(buf);

	endRight= (SIZE-2  );
	lenStr = strlen(buf);
	//lenStr= lenStr +((SIZE)/5);
beginLeft = 0;
	do {
		
		do
		{
			if (lenStr <(beginLeft + countRight))
				break;
						left = buf[beginLeft++];
		} while ('A' < left && left < 'Z');
		
		do {
				
			if ((lenStr) <(beginLeft + countRight))
				break;

				++countRight;
				right = buf[(endRight--)];
			} while ('0' < right && right < '9' );
			if (lenStr <(beginLeft + countRight))
				break;
			buf[--beginLeft]=right ;
			buf[(++endRight)] =left;
			--countRight;

	} while (lenStr >= (beginLeft + countRight));

	//count=strlen(buf); check 

	printf("\n\nChenge string :\n%s\n",buf);
	
	
		//puts(buf[i]);     why Error?
	
	return 0;
}

//  while(i<j)//делаем в рамках одного цикла
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