#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all the numbers of base sixteen in lowercase
 * Return: Always o (success)
 */

int main(void)

{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
