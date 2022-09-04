#include <stdio.h>
#include <stdlib.h>
#include <pthread.h> 

int num,result;
int factorial(int num) {
    if (num>=1)
        return n*factorial(n-1);
    else
        return 1;
}

int main()
{
pthread_t thread;
printf("choice the num to factorial ");
scanf("%d",&num);
result=pthread_create (&thread,NULL,factorial,(int*)num);

pthread_join( thread, NULL );
printf("Factorial of given Number is = %d",result);
return 0;
}

