#include <stdio.h>

/**
 * main - main function
 *
 * Return o on success
 */

int main(void)
{
	char a;
	int b;
	long int c;	
	long long int d;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
