#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"task3.h"
#define SIZE 200
int main()
{
	
	int i, line = 0, weight = 0, height;
	int weightGap,score=0;
	char *result = { " " };
	char buf[SIZE] = { " " };
	char gap[] = { " " };
	printf("Enter numeros line :");
	scanf("%i", &height);
	weight=height+height-1;
	weightGap=height;

		for (line=0;line<=weight-1;line=line+2)
		{
			weightGap --;
				for (i=weightGap;i>0 ;i--)
				{
					printf("%s", gap);
				}
			result = layout(buf, line);
			printf("%s", result);
			printf("\n");
		}

	return 0;
}