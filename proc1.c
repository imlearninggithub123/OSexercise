#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    int pid;
    pid=fork(); 
    if (pid < 0) 
    {
        printf("pid < 0");
        exit(1);
    }
    else if (pid == 0) //child processes
    {
        //create directory using mkdir <directory name>
        execl("/bin/mkdir", "mkdir", "OperatingSystem", NULL); 

        //print "Successful" if created successfully
        printf("Successful!\n");
        exit(0);
        
    }
    else //parent proccess
    {
        wait(0);
        printf("Parent here\n");
        exit(1);
    }
    return 0;
}