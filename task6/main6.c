#define _CRT_SECURE_NO_WARNINGS
#define SIZE 300
#include<stdio.h>
#include<string.h>



int main()
{
	long i,count=0;
	char *lineBegin[SIZE] = {" "};
	char *line[SIZE] = {' '};
	char ch='d';

	printf("Enter string with gap :\n");
	
	for (i = 0; (ch != '\n'); i++)
	{
		ch = getchar();
		line[i]= 'ch';
		count++;
	}
	//fgetchar(line,SIZE,stdin);
	/*
	for (i = 0;lineBegin[i] == check;i++)
	{fgets(str,10,stdin)
		check = putchar;
		if (check != 0)
		{
			lineBegin[i] = check;	
		}
	}
		*/
		//sprintf(line, "%s", lineBegin);
		

	printf("String without gap :\n%s\n", clear(line));

	return 0;
}