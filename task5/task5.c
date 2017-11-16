
#define BUF 8
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


char * password(char line)
{
	int i;
	char i1;
	char buf[BUF] = {' '};
	srand(time(0));
	for (i = 0;i < line;i++)
	{
		switch (rand() % 3)
		{
		case 0:
			buf[i] = rand() % ('z' - 'a' + 1) + 'a';
			break;
		case 1:
			buf[i]= rand() % ('Z' - 'A' + 1) + 'A';
			break;
		case 2:
			buf[i] = rand() % ('0' - '9' + 1) + '1';
			break;
		}

	}
		//buf[(line )] = '\0';

	return buf;
}