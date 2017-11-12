
/*int turn(int value, int secret)//the function check true of entered the value
{				            	/* return '0' to main if user true entered the number ,
								 return '1'to main if user entered the number >number of secret,
								 return '-1 'to main if user entered the number < number of secret
								
	int result=0;	

	if (value > secret)//check what is biger
		result = 1;
	else              //check what is biger
		result = -1;
		
	
return 0;
}
*/

/*Задача №2

   Написать программу ”Угадай число”. Программа задумывает число в диапа-
   зоне от 1 до 100 и пользователь должен угадать его за наименьшее количество
   попыток.
Пояснение

Пользователь вводит число, а программа подсказывает ему: ”больше”, ”меньше”, ”угадал!”.

Состав

Программа должна состоять из двух функций:- int turn(int value, int secret) - проверка числа, введенного пользователем. Функция возвращает положительное число, если число пользователя больше задуманного, отрицательное, если меньше и 0 - если числа совпадают. value - число пользователя, secret - задуманное компьютером число.

main() - организация диалога.*/