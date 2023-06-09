#include <stdio.h>

typedef struct {
    int *array;
    int top;
    int capacity;
} Stack;

void Stnew(Stack *s, int size) {
    s->array = malloc(size * sizeof(int));
    s->top = -1;
    s->capacity = size -1;
}
int isEmpty(Stack *s) {
    if(s->top == -1) {
        return 1;
    }
    return 0;
}
int isFull(Stack *s) {
    if(s->top == s->capacity) {
        return 1;
    }
    return 0;
}
void push(Stack *s, int i) {
    if(isFull(s)) { printf("Stack is full!\n"); }
    s->top++;
    s->array[s->top] = i;
}
int peek(Stack *s) {
    if(isEmpty(s)) { printf("Stack is empty!\n");  }
    return s->array[s->top];
}

int pop(Stack *s) {
    if(isEmpty(s)) { printf("Stack is empty!\n"); };
    int i = peek(s);
    s->top--;
    return i;
}

int main() {
    int input, fac = 1;
    printf("INPUT N: ");
    scanf("%d", &input);

    Stack s;
    Stnew(&s, input);

    for(int i = 1; i <= input; i++) {
        push(&s, i);
    }

    while (!isEmpty(&s))
    {
        fac *= pop(&s);
    }

    printf("The factorial: %d\n",fac);

    return 0;
}
