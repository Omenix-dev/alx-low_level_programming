#include <stdio.h>
/**
 * main - this is used to print the size of the system
 *
 * Return: the statement return zero if the size is printed
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("Size of a int: %lu byte(s)\n", sizeof(int));
printf("Size of long: %lu byte(s)\n", sizeof(long));
printf("Size of long long int: %lu byte(s)\n", sizeof(long long));
printf("Size of float: %lu byte(s)\n", sizeof(float));
return (0);
}
