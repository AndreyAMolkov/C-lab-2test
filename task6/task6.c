#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h> // ��� strlen
#define GAP ' '
#define SIZE 300
char * clear(char *line[SIZE])
{
	int i, j;
	double	len = 0;
	char check1, check2,check3;
	
	len = (strlen("%s",line));
	for (i=0;i<len;i=i+2)
	{
		check1 = line[i];
		check2 = line[i++];
		if (i == 0 && check1 == GAP)
		{
			for (j = i-1; j < len; j = j + 1)
			{
				check1 = line[j];
				check2 = line[j++];
				line[j-1] = check2;
				
			}
				len = len--;
		}
			 if (i > 0 && check1 == GAP &&check2 == GAP )
			 {
				 for (j = i-1; j < len-1; j = j + 1)
				 {
					 check1 = line[j];
					 check2 = line[j++];
					 line[j-1] = check2;
					 
				 }
					len = len--;

			 }
			 if (i ==(len-1) && check1 == GAP)
			 {
				 for (j = i-1; j < len; j = j + 1)
				 {
					 check1 = line[j];
					 check2 = line[j++];
					 check3 = line[j++];
					 line[j-3] = check2;
					 line[j-2] = check3;
					 
				 }
				 len = len--;

			 }
			

	}
	

	return line;
}

/*������ �6

   �������� ���������, ��������� ������ �� ������ ��������. ������� ���-
   ������ ������� � ������ ������, � ����� ������ � ������� ����� �������,
   ���� �� ���������� ������ 1.
���������

� ������ ��������� ��������� ��������� �������������� �������, �� ���� ���������� ���������� � �������� ������. ����� ���������� ��������� �������� �� �����.

������

��������� ������ �������� �� ���� �������:

char * clear(char * line) - ������� ������ line.
main() - ����������� �������.*/