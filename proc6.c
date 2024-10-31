#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
/*create a fan of processes of length 5*/
int main (void) 
{
    int i;
    pid_t childpid = 0;
    for (i = 0; i < 5; i++) 
    {
        if ((childpid = fork()) <= 0)
        {
            break;
        }
        // wait(NULL);
    }
    if (i < 5)
        {
        fprintf(stderr, "loop index %d of process ID:%ld, with child ID:%ld\n",
		    i, (long)getppid(), (long)getpid());
        }
    wait(NULL);
    return 0;
}