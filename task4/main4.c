#define _CRT_N0
#define SIZE 20
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include <string.h> // ��� strlen
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