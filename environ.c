#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */

extern char **environ;

int main()
{
	int i = 0; 

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
