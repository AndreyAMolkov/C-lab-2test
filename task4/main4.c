
#define SIZE 50
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string.h> // ��� strlen
int main()
{
	int i,j=0, score = 0, count = 0, beginLeft=0,endRight = 0, lenStr = 0,countRight=0;
	char line[SIZE] = { ' '};
	char left=' ', right=' ';
	srand(time(0));
	for (i = 0;i < SIZE - 1;i++)
	{
		switch (rand() % 2)
		{
		case 0:
			line[i] = rand() % ('Z' - 'A' + 1) + 'A';
			break;
		case 1:
			line[i] = rand() % ('0' - '9' + 1) + '1';
			break;
		}
	}
		
	line[SIZE - 1] = '\0';
	printf("random string :\n");
	puts(line);

	process(line);

	printf("\n\nChenge string :\n%s\n",line);
	
	//	puts(buf);//     why Error?
	
	return 0;
}

//  while(i<j)//������ � ������ ������ �����
/*������ �4

�������� ���������, �������������� ������� � ������� �������� �������:
������� ���� ��������� �����, ����� �����. ������ �������� � ���� �������-
�� � ���� ��������� ������������������ ���� � ����. ������������ �������-
�������� ��������� ������.
���������

���������� � ������ ������ ����������� ����� �� ������������.
����� ������������ ����������� ��������� �������.
��������� �������� �� ������ � ���� ������ � �������� � ��� ������� � �������������� ��������� ���������
����� � �������� �� ������ �������.

������

��������� ������ �������� �� ���� �������:

char* process(char* line) - ��������� ������.
main() - ����������� �������.*/