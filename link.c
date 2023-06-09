#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void printlist();
void insertatbegin();
struct node
{
    int data;
    struct node* next;
};
struct node *header;
int main()
{
    header = (struct node*)malloc(sizeof(struct node));
    header->data = 10;
    header->next = NULL;
    printf("At first list: \n");
    printlist();
    insertatend();
    insertatend();
    printf("after insert 2 elements in  list: \n");
    printlist();
    insertatgivenpos();
    printf("\nAfter insertion at given position in  list: \n");
    printlist();
}

void printlist()
{
    struct node *ptr;
    ptr = header;
    if(ptr == NULL)
    {
        printf("Nothing to print");
    }
    while (ptr != NULL)
    {
        printf(" %d ", ptr->data);
        ptr = ptr->next;
    }
}
void insertatend()
{
    printf("\nEnter the item to insert at end funtion: ");
    int item;
    scanf("%d",&item);

    struct node *new = (struct node*)malloc(sizeof(struct node));
    struct node *temp;

    if(new == NULL)
        printf("\nOVERFLOW");

    else
    {
        new->data = item;
        if(header == NULL)
        {
            new -> next = NULL;
            header = new;
            printf("\nNode inserted");
        }
        else
        {
            temp = header;
            while (temp -> next != NULL)
            {
                temp = temp -> next;
            }
            temp->next = new;
            new->next = NULL;
            printf("\nNode inserted");

        }
    }
}
int insertatgivenpos()
{
    printf("\nEnter the location: ");
    int pos;
    scanf("%d",&pos);

    printf("\nEnter the item to insert: ");
    int item;
    scanf("%d",&item);

    struct node *new = (struct node*)malloc(sizeof(struct node));
    struct node *temp;

    if(new == NULL)
        printf("\nOVERFLOW");
    else
    {
        new->data = item;
        temp=header;
        for(int i=1; i<pos-1; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\ncan't insert\n");
                return 0;
            }
        }
        new ->next = temp ->next;
        temp ->next = new;
        printf("\nNode inserted at after position %d .\n", pos);
    }
}
