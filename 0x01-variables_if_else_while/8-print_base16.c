/*Program that prints all the numbers of base 16 in lowercase*/
/*call header files*/
#include <stdio.h>
/*Main-Entry point*/

/*Description- printing base 16 numbers*/
/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints basse 16
* Return: 0
*/
int main(void)
{
	/*Declare variables*/
	int  value1, value2;

	/*Introduce for loop*/
	for (value1 = 0; value1 < 10; value1++)
	{
		putchar (value1 + '0');
	}
	for (value2 = 'a'; value2 <= 'f'; value2++)
	{
		putchar (value2);
	}
	putchar('\n');
	return (0);
}
