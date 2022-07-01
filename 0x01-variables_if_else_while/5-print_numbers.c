#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char namba = '0';

	while (namba <= '9')
	{
		putchar(namba);
		namba++;
	}

	putchar('\n');
	return (0);
}
