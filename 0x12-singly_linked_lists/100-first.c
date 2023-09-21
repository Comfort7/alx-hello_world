#include <stdio.h>

/**
 * before_main - Function that prints a message before main is executed.
 *
 * Description: This function is marked as a constructor and will be
 * executed automatically before the main function is called.
 */
void before_main(void) __attribute__((constructor));

/**
 * before_main - Function that prints a message before main is executed.
 *
 * Description: This function is marked as a constructor and will be
 * executed automatically before the main function is called.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
