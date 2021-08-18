#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<sys/stat.h>

int main(int argc, char **argv)
{
	int i, status;
	pid_t pid[5];
	
	for (i = 0; i < 5; i++)
	{
		if ((pid[i] = fork()) == -1)
		{
			perror("fork");
            exit(EXIT_FAILURE);
		}
		if ((pid[i] = fork()) == 0)
		{
			execve(argv[0], argv, NULL);
			fprintf(stderr, "command %s not found", argv[0]);
			sleep(3);
			exit(100 + i);
		}
	}
	for (i = 0; i < 5; i++)
	{
		pid_t cpid = waitpid(pid[i], &status, 0);
        if (WIFEXITED(status))
            printf("Child %d terminated with status: %d\n", cpid, WEXITSTATUS(status));
	}
	return (0);
}
