#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <wait.h>
#include <sys/types.h>


int main() {

    pid_t pid;

    /* fork a child process */
    pid = fork();

    if (pid < 0)
    {
        /*error occurred */
        fprintf(stderr, "Fork Failed\n");
        exit(EXIT_FAILURE);
    }
    else if (pid == 0)
    {
        /* child process */
        printf("I am the child %d\n", getpid());
        execlp("/bin/ls", "ls", NULL);
        exit(EXIT_FAILURE);
    }
    else
    {
        /* parent process; pid is the pid of the child */
        printf("I am the parent %d\n", getpid());
        waitpid(pid, NULL, 1);
        printf("Child Complete\n");
        exit(EXIT_SUCCESS);

    }


   // printf() displays the string inside quotation
   printf("Hello, Process Creation");
   return 0;
}
