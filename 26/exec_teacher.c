// 3. THE EXEC SYSTEM CALL
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
char *args[]={"/usr/bin/firefox","firefox","www.google.com",NULL};
printf("\n My EXEC PID is: %d\n", getpid());
execl("/usr/bin/firefox","firefox",NULL);
//execlp("ls","-la",NULL)
//execvp(args[0],args);
}