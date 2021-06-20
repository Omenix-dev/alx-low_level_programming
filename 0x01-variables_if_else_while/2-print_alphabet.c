#include <stdio.h>
/**
 * main - this function print the aphabet from a-z using putchar
 *
 * Return: 0 is returned at the end of the code
 */
int main(void)
{
char c;
for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
