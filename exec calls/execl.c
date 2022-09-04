#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	//santax for execl(const char *path, const char *arg, ..., NULL);
 	execl("/bin/ls","/bin/ls","-a","-s", NULL);
 	// 1st & 2nd argument for path and 3rd 4th argument for command that we want to run 

    return 0;
}
