#define	NUMBERPASSWORD 10
#define SIZE 8
#define BUF 8
#include<stdio.h>
#include "task5.h"

int main()
{
		int i = 0;
		char line=SIZE;
		char *buf[BUF] = {' '};
	printf("The programm wil be make for you 10 password:\n");

	for (i = 0;i < NUMBERPASSWORD;i++)
	{
		//password(line);
		char *buf = password;
		
		printf("%s\n", password);
			puts(buf);
		
	}
	return 0;
}



/*Задача №5

Написать программу, которая выводит на экран 10 паролей, сгенерированных
случайным образом из латинских букв и цифр, причём буквы должны быть
как в нижнем, так и в верхнем регистрах. Длина пароля - 8 символов.
Пояснение

Пример сгенерированного пароля:Nh1ku83k

Состав

Программа должна состоять из двух функций:

char * password(char * line) - генерация пароля в line.
main*/