#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    pid_t pid;
    printf("Parent PID: %d\n", getpid());
    pid = fork();
    if (pid < 0)
    {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0)
    {
        printf("Child: PID=%d , PPID=%d", getpid(), getppid());
        printf("sleeping for 60 sec");
        sleep(120);
        printf("child exiting now\n");
        exit(EXIT_SUCCESS);
    }
    else
    {
        printf("Parent: created child with PID=%d\n", pid);
        printf("Parent: waiting for child to exit..\n");
        wait(NULL);
        printf("Parent: child finished. Parent exiting.\n");
        return 0;
    }
}