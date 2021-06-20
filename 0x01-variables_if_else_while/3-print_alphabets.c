#include <stdio.h>
/**
 * main - this function print the aphabet from a-z using putchar
 *
 * Return: 0 is returned at the end of the code
 */
int main(void)
{
char c, C;
for (c = 'a' ; c <= 'z' ; c++)
{
putchar(c);
}
for (C = 'A' ; C <= 'Z' ; C++)
{
putchar(C);
}
putchar('\n');
return (0);
}

