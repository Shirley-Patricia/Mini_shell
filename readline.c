#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

int main()
{
	char *line = NULL;
	char *prompt = "$ ";
	size_t linez = 0;
	int c = 0;

	while (1)
	{
		write(STDOUT_FILENO, prompt, _strlen(prompt));
		c = getline(&line, &linez, stdin);
		write(STDOUT_FILENO, line, linez);
	}
	return (0);
}