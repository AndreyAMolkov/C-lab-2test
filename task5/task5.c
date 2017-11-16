#define _CRT_SECURE_NO_WARNINGS
#define BUF 8
#include<stdlib.h>
#include<stdio.h>
#include<time.h>


char * password(char line)
{
	clock_t now;
	int i;
	char buf[BUF+1] = {" "};
	char *result;
	now = clock();
	while (clock() < (now + CLOCKS_PER_SEC))
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
	
	buf[(line)] = '\0';
result = malloc(sizeof(char) * 8);
		sprintf(result, "%s", buf);
	return result;
}