#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
int counter = 0;

sem_t mutex;
void *increment(void *arg)
{
    for (int i = 0; i < 5; i++)
    {
        sem_wait(&mutex);
        int temp = counter;
        printf("Thread %s reads counter = %d\n", (char *)arg, temp);
        temp = temp + 1;
        sleep(1);
        counter = temp;
        printf("Thread %s updates counter = %d\n", (char *)arg, counter);
        sem_post(&mutex);
        sleep(1);
    }
    return NULL;
}
int main()
{
    pthread_t t1, t2;
    sem_init(&mutex, 0, 1);
    pthread_create(&t1, NULL, increment, "A");
    pthread_create(&t2, NULL, increment, "B");
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    printf("final counter value = %d\n", counter);
}