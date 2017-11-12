#define _CRT_SECURE_NO_WARNINGS
#include"task2.c"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
	int i;
	srand(time(0));
	for (i = 0;i < 10;i++)
		printf("%d\n", rand()%100+1);// rand - max=0....32767
	return 0;



}


	/*int score = 0, value = 0, secret = 0, check = 0;
	float checkNumber=0.00;
	printf("the programm made a secret number. Input the number for answer :");
	scanf("%i", &value);
	checkNumber=value;
	while ( value != checkNumber)
	{
		printf("\n You entered error data.\n the programm made a secret number. Enter the number for answer :");
		scanf("%i", &value);
		checkNumber=value;
	}
	//check = turn(value, secret);
	while (check == 0, score++)
	{
		if (check > 0)
			printf("\n attempt ¹ score \n trips: You input the number biger then the secret. \n repit enter ");
		else
			printf("\n attempt ¹ score \n trips: You input the number less then the secret. \n repit enter ");


	}
*/

//	return 0;


