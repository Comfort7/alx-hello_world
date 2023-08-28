#include <stddef.h>

/**
 * set_string - Sets the value of a pointer to a char
 * @s: Pointer to a pointer to char
 * @to: Pointer to the new string value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
