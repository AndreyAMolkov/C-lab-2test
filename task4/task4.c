#define SIZE 50
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string.h> // ��� strlen

	

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