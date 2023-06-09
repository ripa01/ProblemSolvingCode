#include <stdio.h>
#define MAX 5

    int queue_array[MAX];
    int rear = - 1;
    int front = - 1;

    void enQueue(){
                int item;
                if(rear == MAX - 1)
                printf("Queue Overflow!!\n");
                else
                    {
                if(front== - 1)
                    front = 0;
                printf("Insert the element in queue: ");
                scanf("%d",&item);
                rear = rear + 1;
                queue_array[rear] = item;
                }
                printf("\n");
            }

    void deQueue(){
            if(front == - 1 || front > rear){
                printf("Queue Underflow\n");
                return;
            }
        else{
            printf("Element deleted from queue is : %d\n", queue_array[front]);
            front = front + 1;
            }
          printf("\n");
        }


    void display(){
        int i;
        if(front == - 1)
        printf("QUEUE IS EMPTY\n");
        else{
        printf("Queue is: \n");
        for(i = front; i <= rear; i++)
        printf("%d ", queue_array[i]);
        printf("\n");
            }
        }

   void peek() {
        if(front == -1 || front> rear)
        printf("QUEUE IS EMPTY!!\n");

        else {
           printf("Peek element is: %d\n", queue_array[front]);

        }

    }

    void isFull() {
    if(rear == MAX - 1)
       printf("QUEUE IS FULL\n");
    else
      printf("QUEUE IS NOT FULL\n");
    }


    void isEmpty() {
            if(front == -1 || front > rear)
                printf("QUEUE IS EMPTY\n");
            else
                printf("QUEUE IS NOT EMPTY\n");
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
        isFull();
        break;
        case 5:
        isEmpty();
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

