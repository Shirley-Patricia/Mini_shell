#include <stdio.h>

/**
 * main - prints the environment
 *
 * Return: Always 0.
 */

extern char **environ;

int main(int ac, char **av, char **env)
{
    unsigned int i;

	 i = 0;
    while (env[i] != NULL)
    {
        i++;
    }

	int j = 0; 

	while (environ[j] != NULL)
	{
		j++;
	}
	printf("env = %p\n environ = %p\n", &env, &environ);
	return (0);
}
