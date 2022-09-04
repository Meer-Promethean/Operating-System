#include<stdio.h>
#include <unistd.h>
#include<pthread.h>
#include<stdlib.h>

struct S {
    int num,result;
};

int factorial(int num1)
{
    if (num1 >= 1)
        return n * factorial(num1 - 1);
    else
        return 1;
}

void *thread_func(void *args)
{
    struct S *s = (struct S *)args;
    s->result = factorial(s->num);
    return (void *)NULL;
}

int main()
{
    struct S s;
    pthread_t thread;
    printf("choice a number to find factorial: ");
    scanf("%d", &s.num);
    pthread_create(&thread, NULL, thread_func, &s);
    pthread_join(thread, NULL);
    printf("Factorial of your Number is = %d", s.result);
    return 0;
}
