#include <stdlib.h>
#include <stdio.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count;
	int in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
	if (*str == ' ')
	{
		in_word = 0;
	}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int num_words;
	char **words;
	int word_length;
	int i;
	int j;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	return (NULL);
	i = 0;
	while (*str)
	{
	if (*str == ' ')
	{
		str++;
	}
	else
		{
		word_length = 0;
		while (str[word_length] != ' ' && str[word_length] != '\0')
		word_length++;
		words[i] = malloc((word_length + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_length; j++)
		words[i][j] = *str++;
		words[i][word_length] = '\0';
			i++;
		}
	}
	words[i] = NULL;
	return (words);
}
