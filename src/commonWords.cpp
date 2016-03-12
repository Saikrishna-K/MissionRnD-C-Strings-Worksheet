/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31

// this function is called to compare the strings if the length of the words and the initial letters are equal.

bool compare(char *str1, char *str2, int start1, int start2, int len) 
{
	int i, j;
	for (i = start1, j = start2; len > 0; i++, j++, len--)
	{
		if (str1[i] != str2[j]){
			 
			return false;
		}
	}
	return true;

}



char ** commonWords(char *str1, char *str2) {
	if (str1 == NULL || str2 == NULL) return NULL;


	int i, arr[SIZE][2];
	int j = 0, k = 0, l = 0;
	char **result = NULL;
	result = (char **)calloc(4, sizeof(char *));

	//processing the string with which the other string need to be compared.
	//Storing the initial index and length of each and every word of the String1.
	for (i = 0; str1[i]; i++)
	{
		if (str1[i] != ' ' &&j == 0)
		{
			j = 1;
			arr[k][0] = i;

		}
		else if (str1[i] == ' '  && j == 1)
		{
			j = 0;
			arr[k][1] = i - arr[k++][0];
		}

		else if (str1[i] != ' ' && str1[i + 1] == '\0' && j == 1)
		{
			arr[k][1] = i - arr[k++][0] + 1;
		}

	}

	
	j = 0; int len = 0, rIndex = 0, m = 0, res = 0;




// checking whether there are any common words 

	while (str2[j])
	{
		int count = 0;
		res = 0;

		if (str2[j] != ' '){
			for (i = j; str2[i] != '\0' && str2[i] != ' '; i++, count++);
				


			
			len = count;

			for (i = 0; i < k; i++){
				
				if (str1[arr[i][0]] == str2[j] && arr[i][1] == len){
					if (compare(str1, str2, arr[i][0], j, len))
					{

						result[rIndex] = (char *)calloc(len + 2, sizeof(char));

// Copying the common words into the "Result" array by allocating memory.

						while (len--){
							result[rIndex][l++] = str2[j++];
						}

						result[rIndex][l] = '\0';
						rIndex++;
						l = 0;
						
						break;
					}
				}
			}
		}
		j += len + 1;
		len = 0;
		


	}

  // if there are no common words.(if no result is entered into the result array)
	if (rIndex == 0)
	{
		free(result);
		return NULL;
	}


	return result;
}