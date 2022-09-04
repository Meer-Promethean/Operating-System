#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int fac = 4;
int result = 0;
int factorial(int num);
void *helper(void *args)
{                                    
     result = factorial(fac-1);
    return (void *)NULL;
}
int factorial(int num){
	
	if(num == 1){
	return 1;
	}
	
	else{
	pthread_t thread1;
	pthread_create(&thread1, NULL,(void *) helper, &fc-1);
	return num * pthread_create(&thread1, NULL,(void *) helper, &fc);
	
	}

}




int main(){
	
	printf("%d\n" , result);
	return 0;

}

