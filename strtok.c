#include "main.h"

int main()
{
	char buffer[] = "ls -la";
	char *space = " ";
	char *token;

	token = strtok(buffer, space);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, space);
	}
	return (0);
}
