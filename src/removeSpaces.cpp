#include<stdlib.h>
/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {

	if (str == NULL || str == '\0')return '\0';

	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] != ' ')// checking for condition if there is a space 
		{                         // if it encounter a space it does not copy that character into the array (same array with different index).
			str[j++] = str[i];
		}

	}

	str[j] = '\0';

}
