#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	const char* myName() 
	{
		return "John";
	}

	printf("%s", myName());
	return (0);
}
