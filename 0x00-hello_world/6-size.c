#include <stdio.h>
/**
 * main - this is used to print the size of the system
 *
 * Return: the statement return zero if the size is printed
 */
int main(void)
{
printf("Size of a char %lu\n", sizeof(char));
printf("Size of a int %lu\n", sizeof(int));
printf("Size of long %lu\n", sizeof(long));
printf("Size of long long int %lu", sizeof(long long));
printf("Size of float %lu", sizeof(float));
return (0);
}
