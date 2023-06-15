#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print by printf
 *
 * Return: 0 (Sucess)
*/

int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %llu byte(s)\n", sizeof(ll));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
