#define _CRT_N0
#define SIZE 10
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int main()
{
	int i,j=0, score = 0, count = 0, endRight = 0, lenStr = 0;
	char buf[SIZE];
	char lef, right;
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
	puts(buf);

	printf("\ntrue \n");

	endRight=lenStr = (SIZE - 2 - i);
	do {
		do
		{
			i = 0;
			i++;
			score++;
			lef = buf[i];
		} while ('A' < lef && lef < 'Z'&& score < lenStr);
		
			do {
				j = endRight;
				
				j--;

				score++;
				right = buf[(endRight)];
			} while ('0' < right && right < '9'&& score < lenStr);

				//{
				//count++;
				//printf("   %c", riht);

			//buf[i] = riht;
			//buf[end] = lef;
			//}
		//else
		//{
			//if ('0'<lef && lef <'9')

		//}


		//}



	} while (score < lenStr);

	
	printf("score=%i\n",score);
puts(buf);
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