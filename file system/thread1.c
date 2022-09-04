#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

struct thread_data
{
int x;
int y;
int z;
};
struct thread_data Omar;
void *print(void *threadArg)
{
struct thread_data *my_data;
my_data = (struct thread_data *) threadArg;
printf("X: %d, Y: %d, Z: %d\n",my_data->x, my_data->y, my_data->z);
}
int main()
{
pthread_t tid;
Omar.x = 1;
Omar.y = 2;
Omar.z = Omar.x + Omar.y;
pthread_create(&tid, NULL,(void *) print,(void *) &Omar);
pthread_join(tid , NULL);


}
