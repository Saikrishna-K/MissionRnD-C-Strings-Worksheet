/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>

void reverse(char *input, int i, int j)
{
	char temp; int k = 0;

	while (i<j)
	{
		temp = input[i];
		input[i++] = input[j];
		input[j--] = temp;

	}
	
}






void str_words_in_rev(char *input, int len){

	int i=0,j=len-1; char temp;


	while (i<j)
	{
		

		temp = input[i];
		input[i++] = input[j];
		input[j--] = temp;

	}
	
	
	int prev = 0;
	
	for (i = 1; i < len; i++)
	{
		if (input[i] == ' '&&input[i - 1] != ' ') {
			reverse(input, prev, i - 1);
		}
		else if (input[i + 1] == '\0' &&input[i] != ' '){
			reverse(input, prev, i );
		}
			
		

		if ((input[i] == ' '&&input[i+1] != ' ')) prev = i+1;
		

	}

	
}

