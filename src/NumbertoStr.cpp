/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>


void number_to_str(float number, char *str, int afterdecimal){


	int  decimal = 1, i, j = 0, k = 0;
	for (i = 1; i <= afterdecimal; i++)
		decimal *= 10;

	if (number < 0){
		str[j++] = '-';
		k = 1;
		number *= -1;
	}
	int a = (int)number, c;

	c = number * decimal;


	i = 0;


	while (i<afterdecimal)
	{
		i++;
		str[j++] = (c % 10) + 48;
		c /= 10;
	}


	if (afterdecimal>0){
		str[j++] = '.';
	}
	printf("%d ", a);
	while (a != 0)
	{
		str[j++] = (a % 10) + 48;
		a /= 10;
	}



	str[j] = '\0';

	printf("\n %s", str);

	int n;

	while (k < j){

		n = str[--j];
		str[j] = str[k];
		str[k++] = n;
	}



}
