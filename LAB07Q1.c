#include <stdio.h>

struct Queue {
    int front, rear, size;
    int capacity;
    int* array;
};

struct Queue* createQueue(int capacity)
{
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int*)malloc(queue->capacity * sizeof(int));
    return queue;
}

int isFull(struct Queue* queue)
{
    return (queue->size == queue->capacity);
}

int isEmpty(struct Queue* queue)
{
    return (queue->size == 0);
}

void enqueue(struct Queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1)% queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    printf("%d enqueued to queue\n", item);
}

int dequeue(struct Queue* queue)
{
    if (isEmpty(queue))
        return 1;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1)
                   % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

int front(struct Queue* queue)
{
    if (isEmpty(queue))
        return 1;
    return queue->array[queue->front];
}

int rear(struct Queue* queue)
{
    if (isEmpty(queue))
        return 1;
    return queue->array[queue->rear];
}

int main()
{
    struct Queue* queue = createQueue(1000);

    int input, sum = 0;
    printf("INPUT NUMBER: ");
    scanf("%d", &input);

    int a = 0, b = 1;
    if(input >= 1) {
            enqueue(queue, a);
    }
    if(input >= 2) {
            enqueue(queue, b);
    }
    for(int i = 3; i <= input; i++) {
        int next = a + b;
        a = b;
        b = next;
         enqueue(queue, next);
    }
    while (!isEmpty(queue))
    {
        sum += dequeue(queue);
    }
    printf("The summation of Fibonacci series is: %d\n",sum);
    return 0;
}

