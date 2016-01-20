/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>
#include<stdio.h>
char * get_last_word(char * str){
	int i, len = 0, j, index1 = 0, k = 0;
	char *result = (char*)malloc(sizeof(char) 10);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	for (k = len - 1; k >= 0; k--)
	{
		if ((str[k] != ' '))
			break;
	}
	if (k == -1 && str[0] == ' ')
	{
		result[0] = '\0';
		return result;
	}
	for (i = k; i >= 0; i--)
	{
		if (str[i] == ' ')
			break;
	}
	if (k > i)
	{
		for (j = i+ 1; j <= k; j++)
		{
			result[index1] = str[j];
			index1++;
		}
		result[index1] = '\0';
		return result;
	}
	else
		return '\0';
}