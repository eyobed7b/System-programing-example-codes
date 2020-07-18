/*
*  Video Lecture: 18
*  Programmer: Arif Butt
*  Course: System Programming with Linux
*  Proves that after a vfork() call, child execute first and the parent automatically waits, and starts its execution after the child terminates
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
   pid_t cpid = vfork();
   if (cpid == 0){
     
      printf("Hello I am child..\n");
    
      printf("Hello I am child again, I am exitting.\n");
     
   }
   else{
      printf("\nHello I am parent, my child has terminated\n");
      exit(0);
   }
}
