#include <unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main() {
//santax of execvp(const char *file, char *const argv[]);
  char *args[] = {"ls", "-lh", "/home", NULL};
 
  execvp("ls", args);
  //in this path is not require , other arguments can also be passed in the form of array
 
  return 0;
}
