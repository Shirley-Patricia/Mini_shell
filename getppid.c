#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pidC;

	printf("padre PID = %d \n", getpid());
	pidC = fork ();
	if (pidC == -1)
		printf("error");

	printf("padre PID = %d , pidC = %d exec \n", getpid(), pidC);
	return (0);
}
