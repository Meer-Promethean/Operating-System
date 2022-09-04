#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include<sys/wait.h>
int main(int argc, char* argv[]){

int pid = fork();
int i = 1;
char p1[20]; // msg1
char p2[20]; // msg2
while(i=1){
	
	if(pid > 0){       // parent case
	
	printf("P1: ");
	scanf("%s" , p1);
	printf("P1 says: ");
	printf("%s\n",p1);
	} 
	sleep(5);  // wait for the parent turn first
	if(pid == 0){     // child case
	printf("P2: ");
	scanf("%s" , p2);
	printf("P2 says: ");
	printf("%s\n" , p2);
	
	}
	sleep(5); //again wait
	}

return 0;
}



