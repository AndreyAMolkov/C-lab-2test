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



/*������ �5

�������� ���������, ������� ������� �� ����� 10 �������, ���������������
��������� ������� �� ��������� ���� � ����, ������ ����� ������ ����
��� � ������, ��� � � ������� ���������. ����� ������ - 8 ��������.
���������

������ ���������������� ������:Nh1ku83k

������

��������� ������ �������� �� ���� �������:

char * password(char * line) - ��������� ������ � line.
main*/