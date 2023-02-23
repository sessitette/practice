#include <stdio.h>

/**
 * main - Entry point
 * Return: Always (0) Success
 */

int main(void)
{
	char f, m, l;
	int age;

	printf("Enter your initials, followed by your age: \n");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My initials are %c%c%c and my age is %d.\n", f, m, l, age);
	return (0);
}
