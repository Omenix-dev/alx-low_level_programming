#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this function is ued to test different integer
 *
 * Return: 0 is returned if the code  print their values
 */
int main(void)
{
int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastdigit = n % 10;

	if (lastdigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
	printf("Last digit of %d and is 0", n);
	}
	return (0);
}
