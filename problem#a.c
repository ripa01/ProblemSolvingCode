#include <stdio.h>

typedef struct {
    int *array;
    int top;
    int capacity;
}Stack;

void Stnew(Stack *s, int size) {
    s->array = malloc(size * sizeof(int));
    s->top = -1;
    s->capacity = size -1;
}

int isempty(Stack *s) {
    if(s->top == -1) {
        return 1;
    }
    return 0;
}
int isfull(Stack *s) {
    if(s->top == s->capacity) {
        return 1;
    }
    return 0;
}
void push(Stack *s, int i) {
    if(isfull(s)) { printf("Stack is full!\n"); }
    s->top++;
    s->array[s->top] = i;
}
int peek(Stack *s) {
    if(isempty(s)) { printf("Stack is empty!\n");}
    return s->array[s->top];
}

int pop(Stack *s) {
    if(isempty(s)) { printf("Stack is empty!\n");};
    int i = peek(s);
    s->top--;
    return i;
}

int main() {
    int input, sum = 0;
    printf("INPUT N: ");
    scanf("%d", &input);
    Stack s;
    Stnew(&s, input);

    int a = 0, b = 1;
    if(input >= 1) {
            push(&s,a);
    }
    if(input >= 2) {
            push(&s,b);
    }
    for(int i = 3; i <= input; i++) {
        int next = a + b;
        a = b;
        b = next;
        push(&s,next);
    }
    while (!isempty(&s))
    {
        sum += pop(&s);
    }

    printf("The sum: %d\n",sum);

    return 0;
}
