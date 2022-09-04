#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(void) {
 // santax of execlp(const char *file, const char *arg, …, NULL );
  execlp("/bin/ls","ls","-a" , "-l", NULL);
  // 2nd path argument is detected automatically and command are given by user
 
  return 0;
}
