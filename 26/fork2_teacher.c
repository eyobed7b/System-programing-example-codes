#include <stdio.h>
//#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main(int argc, char *argv[])
{

printf("My PID is: %d \n", getpid());
printf("My parent's PPID is: %d \n", getppid());
pid_t p =fork();
if(p<0)
printf("FORK FAILED!!\n");
else if(p == 0)
{
for(int i=1;i<=10;i++)
	{
		printf("couter = %d\n",i);sleep(1);
	}
printf("\nI am CHILD, My PID @ FORK is: %d \n",getpid());
printf("\nI am CHILD, My parent's PPID @ FORK is: %d\n", getppid());
}
else{



printf("I'm parent PPID @ FORK is %d\n",getppid());
wait(NULL); // wait(&status));
}
return 0;
}