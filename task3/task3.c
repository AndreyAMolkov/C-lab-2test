#define _CRT_SECURE_NO_WARNINGS
#define _CRT_N0_WINDOWS
#include<stdio.h>
#include<stdlib.h>
#define SIZE 50

char * layout(char buf[], int line)
{
	int i = 0;
	for (i = 0; i<=line;i++)
	{
		buf[i] = '*';
	}
	return buf;
}



/*������ �3

   �������� ���������, ��������� �� ����� ����������� �� ��������
���������

����������� ������ ��������� ���:

  *
 ***
*****
���������� ����� ������� ������������� � ����������.

������

��������� ������ �������� �� ���� �������:

char * layout(char buf[],int line) - ������������ ����� ������ ������������ (line - ���������� ����� ������ � ������� ������������, ��������� �������� 1). ��� ���� ����� ������ ��������� ��������� (�������), � ����� ��������� "���������".
main() - ����������� �������.*/