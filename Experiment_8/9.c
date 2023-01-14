#include<stdio.h>
#include<string.h>

void main()
{
	//Declaring the required variables
	int strln, wordln, i, j, k, flag, count = 0;
	char str[200], word[20];

	//Getting the input from the user
	//You have to enter a sentence and the words should be separated by spaces
	printf("Enter line of text:\n");
	gets(str);
	printf("Enter the word to count:\n");
	scanf("%s", word);

	//Calculating the length of strings
	strln = strlen(str);
	wordln = strlen(word);

	for (i = 0; i < strln; i++)
	{
		if (str[i] == word[0] && ((str[i - 1] == ' ' || i == 0) && (str[i + wordln] == ' ' || str[i + wordln] == '\0')))
		{
			flag = 0; k = i + 1;
			for (j = 1; j < wordln; j++, k++)
			{
				if (str[k] == word[j])
				{
					flag++;
				}
			}
			if (flag == wordln - 1)
			{
				count++;
			}
		}
	}
	printf("Number of occurence of '%s' = %d\n", word, count);
}