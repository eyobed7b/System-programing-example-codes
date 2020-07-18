/*
*  Video Lecture: 17
*  Programmer: Arif Butt
*  Course: System Programming with Linux
*  Proves that both the child and parent executes concurrently
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
   int cpid = fork();
   if (cpid == 0)
       putchar('x');
   else
     putc('o', stdout);
   return 0;
}
