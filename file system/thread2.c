#include <pthread.h>
#include <stdio.h>
#include<stdlib.h>
  void *PrintHello()
 {
 printf("Hello World! It's me\n");
 pthread_exit(NULL);
  }
 int main()
  {
 pthread_t threads[3];
 int rc;
 int t;
 for(t=0; t<3; t++)
 {
 printf("In main: creating thread %d\n", t);
 rc = pthread_create(&threads[t], NULL, PrintHello, (void *) &t);

 if (rc)
 {
 printf("ERROR; return code from pthread_create() is %d\n", rc);

 exit(1);
 }
 }
 printf("Exiting\n");
 pthread_exit(NULL);
 }

