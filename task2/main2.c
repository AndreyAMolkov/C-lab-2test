#define _CRT_SECURE_NO_WARNINGS
#include"task2.h"
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
 {
	int i=0,score = 1, value = 0, secret = 0, check = 0,result=1;
	
	//int checkNumber = 0.00;
	srand(time(0));
		secret= rand()%100+1;// rand - max=0....32767
	printf("the programm made a secret number. \nAttempt: %i \nInput the number 1-100 for answer :",score);
	scanf("\n%i", &value);
	result = turn(value, secret);
		while (result!= 0)
		{
			score++;
			if (turn(value, secret) > 0)
				printf("\nAttempt: %i \nTrips: You input the number biger then the secret. \nRepit enter :", score);
			else
				printf("\nAttempt: %i \nTrips: You input the number less then the secret. \nRepit enter :", score);
			scanf("%i", &value);
			result = turn(value, secret);
		}
		printf("\ncongratulation. You Win\n");
	return 0;
}


	/*
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
			printf("\n attempt � score \n trips: You input the number biger then the secret. \n repit enter ");
		else
			printf("\n attempt � score \n trips: You input the number less then the secret. \n repit enter ");


	}
*/

//	return 0;


