#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <wait.h>
#include <stdlib.h>

int main(int argc, char* arcv[])
{
	printf("My PID is %d\n",getpid());
	printf("My PPID is %d\n",getppid());
	pid_t pid=fork();
	if(pid==0)
	{
		for(int i=0;i<2;i++)
		{
			
			printf("counter: %d\n",i);
			sleep(1);
		}
		printf("i'm child My PID is %d\n",getpid());
		printf("My parents PID is %d\n",getppid());

	}
	else{
		printf("i'm parent my pid is%d\n",pid);
		wait(NULL);
	}


}