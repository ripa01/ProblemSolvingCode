#include <stdio.h>
#define MAX 5

    int queue_array[MAX];
    int rear = - 1;
    int front = -1;

    void enQueue(){
                int item;
                printf("Inset the element in queue: ");
                scanf("%d",&item);
                if (rear == MAX - 1)
                    printf("Queue Overflow \n");
               else if (front == - 1 && rear == -1)
                       {
                            front = rear = 0;
                           queue_array[rear] = item;
                       }

              else{
                rear = rear + 1;
                queue_array[rear] = item;
                }
            }

    void deQueue(){
             if (front == - 1 || rear == -1)
    {
        printf("Queue Underflow \n");

    }
    else if(rear== front){
           front = rear = -1;
    }
        else{
            printf("Element deleted from queue is : %d\n", queue_array[front]);
            front = front + 1;
            }
          printf("\n");
        }


    void display(){
        int i;
        if(front == - 1 && rear == -1){
        printf("Queue is empty \n");
        }
        else{
        printf("Queue is: \n");
        for(i = front; i < rear+1; i++)
        printf("%d ", queue_array[i]);
        printf("\n");
            }
        }

   int peek(){
       if(front == - 1 && rear == -1){
        printf("Queue is empty \n");
        }
    else
        printf("Element deleted from queue is : %d\n", queue_array[front]);
    }

    void isfull() {
    if(rear == MAX - 1)
       printf("Queue is Full\n");
    else
      printf("Queue is not Full\n");
    }


    void isempty() {
            if(front == -1 || front > rear)
                printf("Queue is EMPTY\n");
            else
                printf("Queue is NOT EMPTY\n");
        }

    int main(){
        int choice;
        while(1){
    printf("1.EnQueue\n");
    printf("2.DeQueue \n");
    printf("3.Peek\n");
    printf("4.isFull\n");
    printf("5.isEmpty\n");
    printf("6.Display\n");
    printf("7.Quit\n");
    printf("Enter your choice : ");
        scanf("%d", &choice);

    switch(choice){
        case 1:
        enQueue();
        break;
        case 2:
        deQueue();
        break;
        case 3:
        peek();
        break;
        case 4:
        isfull();
        break;
        case 5:
        isempty();
        break;
        case 6:
        display();
        break;
        case 7:
        exit(1);
        default:
        printf("Wrong choice!!\n");}

        }
     return 0;
}

