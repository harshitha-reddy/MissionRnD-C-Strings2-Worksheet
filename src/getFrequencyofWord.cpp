/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>
#include<string.h>
int count_word_in_str_way_1(char *str, char *word){
	int i = 0, j = 0, k, count = 0, len = 0;
	for (j = 0; word[j] != '\0';j++)
	{
		len++;	
	}
	j = 0;
	while (str[i]!='\0')
	{
		k = i + 1;
		j = 0;
		while (word[j]!='\0')
		{
			if (str[i] == word[j])
			{
				j++;
				i++;
			}
			else
			{
				i++;
				break;
			}
		}
		if (j == len)
		{
			count++;
		}
		i = k;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

