#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"task3.h"
#define SIZE 50
int main()
{
	int height=0,line=0;
	char *str=" ";
	char *buf[SIZE][SIZE];
	printf("enter the number string: ");
	scanf("%i", line);
	str = layout(buf, line);
	printf("\n%s", str);

	return 0;
}