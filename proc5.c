#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
/*create a chain of processes of length 5*/
int main (void) 
{
    pid_t childpid = 0;
    for (int i = 0; i < 5; i++) 
    {
        if (childpid = fork()) break;
        wait(NULL);
        fprintf(stderr, "process %ld with  parent %ld is at position %d in the chain\n",
            (long)getpid(),(long)getppid(), i);
    }
    return 0;
}