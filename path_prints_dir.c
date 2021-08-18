#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char buffer[] = "/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin";
	char *colon = ":";
	char *dir;
	char c = '\n';
	int a = 0;
		
	dir = strtok(buffer, colon);

	while (dir != NULL)
	{
		a = strlen(dir);
		write(STDOUT_FILENO, dir, a);
		write(1, &c, 1);
		dir = strtok(NULL, colon);
	}
	return (0);
}
