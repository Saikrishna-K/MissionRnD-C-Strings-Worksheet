
#include<stdlib.h>
/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {




	// checking the null conditions
	if (str == NULL || str == "") return '\0';

	int i = 0;
	// finding the length of the string
	for (i = 0; str[i] != '\0'; i++);
	// checking the out of index condition
	if (K >= i || K<0) return '\0';

	//returing the requried index character.
	else return str[i - 1 - K];


	return '\0';
}