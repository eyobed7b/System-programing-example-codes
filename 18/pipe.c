#include <stdio.h>
#define _GNU_SOURCE             /* See feature_test_macros(7) */
#include <fcntl.h>              /* Obtain O_* constant definitions */
#include <unistd.h>

int main()
{
	char buf[SIZE];
	char[] msg="This is pipe";
	int fd[2];
	int w=write(fd[1],msg,strlen(msg));
	int r=read(fd[0],buf,w);
	write(1,buff,r);
}