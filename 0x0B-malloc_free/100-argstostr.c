#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to a new string containing the concatenated arguments,
 *         or NULL if ac is 0 or av is NULL or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int total_len;
	int i;
	char *result;
	char *arg;
	int len;

	if (ac == 0 || av == NULL)
		return (NULL);
	total_len = 0;

	i = 0;
	while (i < ac)
	{
	if (av[i] != NULL)
	{
		arg = av[i];
		while (*arg != '\0')
			total_len++, arg++;
		total_len++;
	}
		i++;
	}
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (result == NULL)
	return (NULL);
	i = 0;
	len = 0;
	while (i < ac)
	{
		if (av[i] != NULL)
		{
			arg = av[i];
		while (*arg != '\0')
		result[len++] = *arg++;
		result[len++] = '\n';
		}
		i++;
	}
	result[len] = '\0';
	return (result);
}
