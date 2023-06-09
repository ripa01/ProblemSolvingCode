#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *array;
    int top;
    int capacity;
} Stack;

void stack_new(Stack *s, int cap) {
    s->array = malloc(cap * sizeof(int));
    s->top = -1;
    s->capacity = cap -1;
}

bool is_empty(Stack *s) {
    if(s->top == -1) {
        return true;
    }
    return false;
}

bool is_full(Stack *s) {
    if(s->top == s->capacity) {
        return true;
    }
    return false;
}

void stack_push(Stack *s, int i) {
    if(is_full(s)) { printf("Stack is full!\n"); return; }
    s->top++;
    s->array[s->top] = i;
}

int stack_peek(Stack *s) {
    if(is_empty(s)) { printf("Stack is empty!\n"); return -1; }
    return s->array[s->top];
}

int stack_pop(Stack *s) {
    if(is_empty(s)) { printf("Stack is empty!\n"); return -1; };
    int i = stack_peek(s);
    s->top--;
    return i;
}

void traverse_stack(Stack *s) {
    printf("Current state of the stack: ");
    for(int i = 0; i <= s->top; i++) {
        printf("%d ", s->array[i]);
    }
    printf("\n");
}

int main() {
    int input, sum = 0;
    printf("Enter N: ");
    scanf("%d", &input);

    Stack s;
    stack_new(&s, input);

    int prevPrev = 0, prev = 1;

    if(input >= 1) {
            stack_push(&s, prevPrev);
    }
    if(input >= 2) {
            stack_push(&s, prev);
    }

    for(int i = 3; i <= input; i++) {
        int next = prev + prevPrev;
        prevPrev = prev;
        prev = next;
        stack_push(&s, next);
    }

    traverse_stack(&s);

    while (!is_empty(&s))
    {
        sum += stack_pop(&s);
    }

    printf("The sum: %d\n", sum);

    return 0;
}
