#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
       else if (s[i] == '+')
	{
		i++;
	}

	while (_isdigit(s[i]))
	{
		result = result * 10 + (s[i] - '0');
			i++;
	}

	return (sign * result);
}
