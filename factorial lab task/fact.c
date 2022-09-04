#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int factorial(int num){
	if(num == 1){
	return 1;
	}
	else{
	return num * factorial(num-1);
	}

}

int fc;
int result;  
void *helper(void *args)
{                                    
     result = factorial(fc); 
    return (void *)NULL;
}



int main(){
	printf("Enter Number :");
	scanf("%d" ,&fc);
	pthread_t thread1;
	result = pthread_create(&thread1, NULL,(void *) helper, &fc);
	pthread_join(thread1 , NULL);
	printf("%d\n" , result );
	
	return 0;

}

