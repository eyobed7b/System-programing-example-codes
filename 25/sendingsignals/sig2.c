/*
*  Video Lecture: 25
*  Programmer: Arif Butt
*  Course: System Programming with Linux
*  User sends a signal via keyboard to foreground running process
*/
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
 while(1) {
   printf("I am in an infinite loop! Press <CTRL+C> to exit\n");
   sleep(1);
 }
 return 0;
}
